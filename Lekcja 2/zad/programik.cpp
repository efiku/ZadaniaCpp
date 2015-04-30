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
 float *wsk = new float;
 ShowMessage(*wsk);
 delete wsk;
 wsk = NULL;


}

/****************************************************************************/
// Funkcje
/****************************************************************************/
//
//  Suma:
//  @parm &argA wsk float
//  @parm &argB wsk float
//  @return float;
//***************************************************************************
float Suma(float &argA, float &argB)
{
    return ( argA + argB );
}
//////////////////////////////////////////////////////////////////////////////
//
//  Suma:
//  @parm &argA wsk float
//  @parm &argB wsk float
//  @return float;
//***************************************************************************
float Razy(float &argA, float &argB)
{
    return ( argA * argB );
}
//////////////////////////////////////////////////////////////////////////////
//
//  Roznica:
//  @parm &argA wsk float
//  @parm &argB wsk float
//  @return float;
//***************************************************************************
float Roznica(float &argA, float &argB)
{
  return ( argA - argB );
}
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//
//  Dzielenie:
//  @parm &argA wsk float
//  @parm &argB wsk float
//  @return float
//***************************************************************************
float Dzielenie(float &argA, float &argB)
{
       if(argB == 0 && argA != 0)
       {
          ShowMessage("Nie dzielimy przez zero !");
          argA = 0 ;
          argB = 0 ;
       }
       else if ( argA == 0 && argB == 0 )
       {
                argA = 0 ;
                argB = 0 ;
                return 0;
       }
       else
       {
               return   ( argA / argB );
       }
}
//////////////////////////////////////////////////////////////////////////////




//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   try
   {
      float Z_A,Z_B;

       Z_A = StrToFloat(Liczba1->Text);
       Z_B = StrToFloat(Liczba2->Text);

       wynik->Text = Suma(Z_A, Z_B);
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

       wynik->Text = Roznica(Z_A,Z_B);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
       float Z_A, Z_B , WYN;
       Z_A = StrToFloatDef(Liczba1->Text, 0);     // jak literka to da 0 .

       Z_B = StrToFloatDef(Liczba2->Text, 0);

       wynik->Text = Dzielenie(Z_A,Z_B);
}

void __fastcall TForm1::iloczynClick(TObject *Sender)
{
       float Z_A,Z_B;
       Z_A = StrToFloatDef(Liczba1->Text, 0);
       Z_B = StrToFloatDef(Liczba2->Text, 0);

       wynik->Text = Razy(Z_A,Z_B);
}
//---------------------------------------------------------------------------


