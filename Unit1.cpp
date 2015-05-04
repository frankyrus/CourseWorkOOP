// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDogForm *DogForm;
//

// ---------------------------------------------------------------------------
__fastcall TDogForm::TDogForm(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TDogForm::Exit1Click(TObject *Sender) {
	Close();
}
// -------------------------------------------------------------------------
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Save1Click(TObject *Sender) {
	SaveDialog1->Title = "Save File..."; // ��������� ����
	SaveDialog1->Filter = "Dog files (*.dat)|*.DAT"; // ������ ����� �����
	if (SaveDialog1->Execute())
		dogsTree->SaveToFile(SaveDialog1->FileName);

}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Open1Click(TObject *Sender) {
	OpenDialog1->Title = "Open File..."; // ��������� ����
	OpenDialog1->Filter = "Dog files (*.dat)|*.DAT"; // ������ ����� �����
	if (OpenDialog1->Execute())
		if (FileExists(OpenDialog1->FileName))
			dogsTree->LoadFromFile(OpenDialog1->FileName);
}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Cleartree1Click(TObject *Sender) {
	dogsTree->Items->Clear();
	dogsTree->Items->Add(NULL, "��������");
	dogsTree->Items->Item[0]->ImageIndex = 0;
	dogsTree->Items->Item[0]->SelectedIndex = 3;
	dogsTree->Items->Add(NULL, "������������");
	dogsTree->Items->Item[1]->ImageIndex = 1;
	dogsTree->Items->Item[1]->SelectedIndex = 3;
	dogsTree->Items->Add(NULL, "���������");
	dogsTree->Items->Item[2]->ImageIndex = 2;
	dogsTree->Items->Item[2]->SelectedIndex = 3;
}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Add1Click(TObject *Sender) {
	TdogeAdd *dogeAdd = new TdogeAdd(this);
	dogeAdd->ShowModal();
}
