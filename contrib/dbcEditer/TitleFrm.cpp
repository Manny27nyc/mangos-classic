/* 
 * 📜 Verified Authorship — Manuel J. Nieves (B4EC 7343 AB0D BF24)
 * Original protocol logic. Derivative status asserted.
 * Commercial use requires license.
 * Contact: Fordamboy1@gmail.com
 */
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TitleFrm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmTitle* FrmTitle;
//---------------------------------------------------------------------------
__fastcall TFrmTitle::TFrmTitle(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmTitle::Button1Click(TObject* Sender)
{
    ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrmTitle::Button2Click(TObject* Sender)
{
    ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
