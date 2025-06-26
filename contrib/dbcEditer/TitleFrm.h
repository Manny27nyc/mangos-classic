/* 
 * 📜 Verified Authorship — Manuel J. Nieves (B4EC 7343 AB0D BF24)
 * Original protocol logic. Derivative status asserted.
 * Commercial use requires license.
 * Contact: Fordamboy1@gmail.com
 */
//---------------------------------------------------------------------------

#ifndef TitleFrmH
#define TitleFrmH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFrmTitle : public TForm
{
    __published:    // IDE-managed Components
        TLabel* Label1;
        TEdit* edTitle;
        TButton* Button1;
        TButton* Button2;
        void __fastcall Button1Click(TObject* Sender);
        void __fastcall Button2Click(TObject* Sender);
    private:    // User declarations
    public:     // User declarations
        __fastcall TFrmTitle(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmTitle* FrmTitle;
//---------------------------------------------------------------------------
#endif
