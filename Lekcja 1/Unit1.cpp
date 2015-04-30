//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
   ShowMessage("Wpisz dwie liczby i nacisnij odpowiedni klawisz");
   Liczba1->Text = "0";
   Liczba2->Text = "0";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        float l1,l2,w;
       /* if(!l1 = StrToFloat(Liczba1->Text))
        {
           ShowMessage("Podales niewlasciwa liczbe");
           l1 = 0;
        }
        */
        l2 = StrToFloat(Liczba2->Text);

        w = l1 + l2 ;
        wynik->Text = w;

}

