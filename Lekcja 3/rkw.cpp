//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <math.h>
#include "rwkd.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------    ,
double TRownanieKwadratowe::Delta() const
{
 return b*b-4*a*c;
}

TRownanieKwadratowe::TRownanieKwadratowe(double a, double b, double c):TObject(),a(a),b(b),c(c)
{
}
double TRownanieKwadratowe::X1() const
{
return (-b-sqrt(Delta()))/(2*a);
}
double TRownanieKwadratowe::X2() const
{
return (-b+sqrt(Delta()))/(2*a);
}


// ----------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  TRownanieKwadratowe* prk=new TRownanieKwadratowe(1,1,-2);

  ShowMessage("Rozwi¹zania: x1="+FloatToStr(prk->X1())+", x2="+FloatToStr(prk->X2()));

 delete prk;        
}
//---------------------------------------------------------------------------

