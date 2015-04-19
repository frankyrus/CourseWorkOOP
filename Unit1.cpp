// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDogForm *DogForm;

// ---------------------------------------------------------------------------
__fastcall TDogForm::TDogForm(TComponent* Owner) : TForm(Owner) {
}
// ---------------------------------------------------------------------------
void __fastcall TDogForm::Exit1Click(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------

