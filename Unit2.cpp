// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

bool pressed;

// ---------------------------------------------------------------------------
__fastcall TdogeAdd::TdogeAdd(TComponent* Owner) : TForm(Owner) {
}
// ---------------------------------------------------------------------------

void __fastcall TdogeAdd::AddButtonClick(TObject *Sender) {
	if (BreedComboBox->ItemIndex == 0) {
		DogForm->dogsTree->Items->AddChild(nodFight, BreedEdit->Text);
	}
	if (BreedComboBox->ItemIndex == 1) {
		DogForm->dogsTree->Items->AddChild(nodToy, BreedEdit->Text);
	}
	if (BreedComboBox->ItemIndex == 2) {
		DogForm->dogsTree->Items->AddChild(nodWork, BreedEdit->Text);
	}
	if (LifeEdit->Text != "") {
		AboutMemo->Lines->Insert(0, "����������������� �����: " +
			LifeEdit->Text);
	}
	if (TallEdit->Text != "") {
		AboutMemo->Lines->Insert(1, "���� (� �����): " + TallEdit->Text);
	}
	if (WeightEdit->Text != "") {
		AboutMemo->Lines->Insert(2, "���: " + WeightEdit->Text);
	}
	if (QualityEdit->Text != "") {
		AboutMemo->Lines->Insert(3, "��������: " + QualityEdit->Text);
	}
	AboutMemo->Lines->SaveToFile(BreedEdit->Text);
	if (pressed == false) {
		DogSmallImage->Picture->LoadFromFile("DefaultDog.jpg");
		DogSmallImage->Picture->SaveToFile(BreedEdit->Text + ".jpg");
	}
	else {
		DogSmallImage->Picture->SaveToFile(BreedEdit->Text + ".jpg");
	}
	BreedEdit->Text = "";
	LifeEdit->Text = "";
	TallEdit->Text = "";
	WeightEdit->Text = "";
	QualityEdit->Text = "";
	AboutMemo->Clear();
	DogSmallImage->Picture->Bitmap->FreeImage();
	DogSmallImage->Picture->Bitmap = NULL;
	pressed = false;
}
// ---------------------------------------------------------------------------

void __fastcall TdogeAdd::ImageButtonClick(TObject *Sender) {
	pressed = true;
	DogForm->OpenDialog1->Title = "Open File...";
	DogForm->OpenDialog1->Filter =
		"Image files (*.jpg)|*.JPG|Image files (*.jpeg)|*.JPEG|";
	if (DogForm->OpenDialog1->Execute())
		if (FileExists(DogForm->OpenDialog1->FileName))
			DogSmallImage->Picture->LoadFromFile
				(DogForm->OpenDialog1->FileName);
}
// ---------------------------------------------------------------------------
