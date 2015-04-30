//---------------------------------------------------------------------------
//  Krzysztof Pazdur kl 4 ti gr 1 num 6
//-------------------------------
#include <vcl.h>
#pragma hdrstop

#include "programik.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
   ShowMessage("Siemka\nWpisz dwie liczby i nacisnij odpowiedni klawisz");
   Liczba1->Text = "0";
   Liczba2->Text = "0";
   wynik->Text = "0";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   try
   {
      float Z_A,Z_B;

       Z_A = StrToFloat(Liczba1->Text);
       Z_B = StrToFloat(Liczba2->Text);

       wynik->Text = (Z_A+Z_B);
    }
    catch (EConvertError &exc)
    {
        wynik->Clear();
        wynik->Text = 0;
        ShowMessage("Wprowadzono niew³asciwy znak!");
        return;  
    }
    catch(...)
    {
        wynik->Clear();
        ShowMessage("Dziwny typ bledu");
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
       float Z_A,Z_B;
       Z_A = StrToFloatDef(Liczba1->Text, 0);
       Z_B = StrToFloatDef(Liczba2->Text, 0);

       wynik->Text = (Z_A-Z_B);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
       float Z_A, Z_B , WYN;
       Z_A = StrToFloatDef(Liczba1->Text, 0);     // jak literka to da 0 . 

       Z_B = StrToFloatDef(Liczba2->Text, 0);
       if(Z_B == 0 && Z_A != 0)
       {
          ShowMessage("Nie dzielimy przez zero !");
          Z_A = 0 ;
          Z_B = 0 ;
          Liczba1->Text = "0";
          Liczba2->Text = "0";
          wynik->Text = "0";
       }
       else if ( Z_A == 0 && Z_B == 0 )
       {
                Z_A = 0 ;
                Z_B = 0 ;
                wynik->Text = "0";
       }
       else
       {
                WYN = Z_A / Z_B ;
                wynik->Text = WYN;
       }

}

void __fastcall TForm1::iloczynClick(TObject *Sender)
{
       float Z_A,Z_B;
       Z_A = StrToFloatDef(Liczba1->Text, 0);
       Z_B = StrToFloatDef(Liczba2->Text, 0);

       wynik->Text = (Z_A*Z_B);
}
//---------------------------------------------------------------------------

