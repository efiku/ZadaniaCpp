//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kalkulator.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCalc_c *Calc_c;

bool starter = false;
float a,b = 0;
double c = 0;
//---------------------------------------------------------------------------
__fastcall TCalc_c::TCalc_c(TComponent* Owner)
        : TForm(Owner)
{
        ShowMessage("Witam!\n\nOto prosty program pe³ni¹cy zadania kalkulatora!");
        c_text->Text = "0";
}
//---------------------------------------------------------------------------
