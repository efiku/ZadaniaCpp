//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------


  class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};

/*type
 TRownanieKwadratowe = class
 private
  function Delta :Double;
 public
  a,b,c :Double;
  constructor Create(a,b,c :Double);
  function X1 :Double;
  function X2 :Double;
 end; */


class TRownanieKwadratowe : public TObject
{
    private:
     double Delta() const;
    public:
     double a,b,c;
     TRownanieKwadratowe(double a, double b, double c);
      double X1() const;
      double X2() const;

  };


//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
