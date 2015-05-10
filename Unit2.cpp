// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

// ---------------------------------------------------------------------------
__fastcall TdogeAdd::TdogeAdd(TComponent* Owner) : TForm(Owner) {
}
// ---------------------------------------------------------------------------

void __fastcall TdogeAdd::Button1Click(TObject *Sender) {
	if (ComboBox1->ItemIndex == 0) {
		DogForm->dogsTree->Items->AddChild(nodFight,Edit1->Text);
	}
	if (ComboBox1->ItemIndex == 1) {
		DogForm->dogsTree->Items->AddChild(nodToy,Edit1->Text);
	}
	if (ComboBox1->ItemIndex == 2) {
		DogForm->dogsTree->Items->AddChild(nodWork,Edit1->Text);
	}
	if (Edit2->Text != "") {
		Memo1->Lines->Insert(0, "Продолжительность жизни: " + Edit2->Text);
	}
	if (Edit3->Text != "") {
		Memo1->Lines->Insert(1, "Рост (в холке): " + Edit3->Text);
	}
	if (Edit4->Text != "") {
		Memo1->Lines->Insert(2, "Вес: " + Edit4->Text);
	}
	if (Edit5->Text != "") {
		Memo1->Lines->Insert(3, "Вес: " + Edit5->Text);
	}
	Memo1->Lines->SaveToFile(Edit1->Text);
	Image1->Picture->SaveToFile(Edit1->Text + ".jpg");
	Edit1->Text = "";
	Edit2->Text = "";
	Edit3->Text = "";
	Edit4->Text = "";
	Edit5->Text = "";
	Memo1->Clear();
	Image1->Picture->Free();
}
// ---------------------------------------------------------------------------

void __fastcall TdogeAdd::Button2Click(TObject *Sender) {
	DogForm->OpenDialog1->Title = "Open File...";
	DogForm->OpenDialog1->Filter = "Image files (*.jpg)|*.JPG";
	if (DogForm->OpenDialog1->Execute())
		if (FileExists(DogForm->OpenDialog1->FileName))
			Image1->Picture->LoadFromFile(DogForm->OpenDialog1->FileName);
}
// ---------------------------------------------------------------------------
