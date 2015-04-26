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
//-------------------------------------------------------------------------
//---------------------------------------------------------------------------


void __fastcall TDogForm::Save1Click(TObject *Sender)
{ SaveDialog1 -> Title = "Save File...";                                  // ��������� ����
  SaveDialog1 -> Filter = "Dog files (*.dat)|*.DAT";        //������ ����� �����
  if (SaveDialog1->Execute())
	  dogsTree-> SaveToFile(SaveDialog1->FileName);

}
//---------------------------------------------------------------------------

void __fastcall TDogForm::Open1Click(TObject *Sender)
{
  OpenDialog1 -> Title = "Open File...";                                  // ��������� ����
  OpenDialog1 -> Filter = "Dog files (*.dat)|*.DAT";        //������ ����� �����
  if (OpenDialog1->Execute())
	if (FileExists (OpenDialog1->FileName))
	  dogsTree -> LoadFromFile(OpenDialog1->FileName);

}
//---------------------------------------------------------------------------

void __fastcall TDogForm::Cleartree1Click(TObject *Sender)
{
	dogsTree -> Items -> Clear();
}
//---------------------------------------------------------------------------

