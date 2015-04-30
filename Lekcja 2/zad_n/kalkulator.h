//---------------------------------------------------------------------------

#ifndef kalkulatorH
#define kalkulatorH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TCalc_c : public TForm
{
__published:	// IDE-managed Components
        TEdit *c_text;
        TButton *b_1;
        TButton *b_2;
        TButton *b_3;
        TButton *b_4;
        TButton *b_5;
        TButton *b_6;
        TButton *b_7;
        TButton *b_8;
        TButton *b_9;
        TButton *b_0;
        TButton *b_dz;
        TButton *b_wyn;
        TButton *b_plus;
        TButton *b_raz;
private:	// User declarations
public:		// User declarations
        __fastcall TCalc_c(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCalc_c *Calc_c;
//---------------------------------------------------------------------------
#endif
