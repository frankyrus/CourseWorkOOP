// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDogForm *DogForm;

void init() {
	DogForm->dogsTree->Items->Add(NULL, "Бойцовые");
	DogForm->dogsTree->Items->Item[0]->ImageIndex = 0;
	DogForm->dogsTree->Items->Item[0]->SelectedIndex = 3;
	DogForm->dogsTree->Items->Add(NULL, "Декоративные");
	DogForm->dogsTree->Items->Item[1]->ImageIndex = 1;
	DogForm->dogsTree->Items->Item[1]->SelectedIndex = 3;
	DogForm->dogsTree->Items->Add(NULL, "Служебные");
	DogForm->dogsTree->Items->Item[2]->ImageIndex = 2;
	DogForm->dogsTree->Items->Item[2]->SelectedIndex = 3;
}

//

// ---------------------------------------------------------------------------
__fastcall TDogForm::TDogForm(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TDogForm::Exit1Click(TObject *Sender) {
	Close();
}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Save1Click(TObject *Sender) {
	SaveDialog1->Title = "Save File..."; // заголовок окна
	SaveDialog1->Filter = "Dog files (*.dat)|*.DAT"; // шаблон имени файла
	if (SaveDialog1->Execute())
		dogsTree->SaveToFile(SaveDialog1->FileName);

}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Open1Click(TObject *Sender) {
	OpenDialog1->Title = "Open File..."; // заголовок окна
	OpenDialog1->Filter = "Dog files (*.dat)|*.DAT"; // шаблон имени файла
	if (OpenDialog1->Execute())
		if (FileExists(OpenDialog1->FileName)) {
			dogsTree->LoadFromFile(OpenDialog1->FileName);
			DogForm->dogsTree->Items->Item[0]->ImageIndex = 0;
			DogForm->dogsTree->Items->Item[0]->SelectedIndex = 3;
			DogForm->dogsTree->Items->Item[1]->ImageIndex = 1;
			DogForm->dogsTree->Items->Item[1]->SelectedIndex = 3;
			DogForm->dogsTree->Items->Item[2]->ImageIndex = 2;
			DogForm->dogsTree->Items->Item[2]->SelectedIndex = 3;
		}

}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Cleartree1Click(TObject *Sender) {
	dogsTree->Items->Clear();
	init();

}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Add1Click(TObject *Sender) {
	TdogeAdd *dogeAdd = new TdogeAdd(this);
	dogeAdd->ShowModal();
}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::dogsTreeChange(TObject *Sender, TTreeNode *Node) {
	if (dogsTree->Selected != dogsTree->Items->Item[0]) {
		if (dogsTree->Selected != dogsTree->Items->Item[1]) {
			if (dogsTree->Selected != dogsTree->Items->Item[2]) {
				Memo1->Lines->LoadFromFile(dogsTree->Selected->Text);
				Image1->Picture->LoadFromFile(dogsTree->Selected->Text +
					".jpg");
				Memo1->Visible = true;
				Image1->Visible = true;
			}
		}
	}
}
// ---------------------------------------------------------------------------
