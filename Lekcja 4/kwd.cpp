//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "kwd.h"
#include "Delta.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
         Edit1->Text = "";
         Edit2->Text = "";
         Edit3->Text = "";
         Edit4->Text = "";
         Label7->Caption = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
     Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit4Change(TObject *Sender)
{
       // button liczacy delte
       
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   try
   {
        if(Edit1->Text == "" ||
           Edit2->Text == "" ||
           Edit3->Text == ""
          )
          {
          ShowMessage("Powinienes uzupelnic wszystkie pola");

          }
          else
     {

        double va,vb,vc;
        va =  StrToFloat(Edit1->Text)  ;
        vb =  StrToFloat(Edit2->Text)  ;
        vc =  StrToFloat(Edit3->Text)  ;


        efik::CDelta *Delta = new efik::CDelta(va,vb,vc);

        Edit4->Text = FloatToStr(Delta->Delta());
        Label7->Caption = Delta->PodajWynik().c_str();

        ShowMessagePos("Delta obliczona - Ziemia ocalona!", 100, 20 );
        delete Delta;
        Delta = NULL;
        


      }
   }
   catch( EConvertError &exc )
   {
        Application->ShowException(&exc);
        Edit1->Clear();
         Edit2->Clear();
          Edit3->Clear();
           Edit4->Clear();
           Label7->Caption = "";
            
   }







}
//---------------------------------------------------------------------------
