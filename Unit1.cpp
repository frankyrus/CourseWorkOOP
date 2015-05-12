// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "ABOUT.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDogForm *DogForm;
TTreeNode * nodFight;
TTreeNode * nodToy;
TTreeNode * nodWork;

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
	SaveDialog1->Title = "Save File..."; // ��������� ����
	SaveDialog1->Filter = "Dog files (*.dog)|*.DOG"; // ������ ����� �����
	if (SaveDialog1->Execute())
		dogsTree->SaveToFile(SaveDialog1->FileName + ".dog");

}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Open1Click(TObject *Sender) {
	OpenDialog1->Title = "Open File..."; // ��������� ����
	OpenDialog1->Filter = "Dog files (*.dog)|*.DOG"; // ������ ����� �����
	if (OpenDialog1->Execute())
		if (FileExists(OpenDialog1->FileName)) {
			dogsTree->LoadFromFile(OpenDialog1->FileName);
			for (int i = 0; i < dogsTree->Items->Count; i++) {
				if (dogsTree->Items->Item[i]->Text == "��������") {
					nodFight = dogsTree->Items->Item[i];
					nodFight->ImageIndex = 0;
					nodFight->SelectedIndex = 3;
				}
				if (dogsTree->Items->Item[i]->Text == "������������") {
					nodToy = dogsTree->Items->Item[i];
					nodToy->ImageIndex = 1;
					nodToy->SelectedIndex = 3;
				}
				if (dogsTree->Items->Item[i]->Text == "���������") {
					nodWork = dogsTree->Items->Item[i];
					nodWork->ImageIndex = 2;
					nodWork->SelectedIndex = 3;
				}
			}
		}

}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Clear1Click(TObject *Sender) {
	if (MessageDlg("�� ������������� ������ �������� �������?", mtConfirmation,
		TMsgDlgButtons() << mbOK << mbCancel, 0) == mrOk) {
		dogsTree->Items->Clear();
		nodFight = dogsTree->Items->Add(NULL, "��������");
		nodFight->ImageIndex = 0;
		nodFight->SelectedIndex = 3;
		TTreeNode * nodToy = dogsTree->Items->Add(NULL, "������������");
		nodToy->ImageIndex = 1;
		nodToy->SelectedIndex = 3;
		TTreeNode * nodWork = dogsTree->Items->Add(NULL, "���������");
		nodWork->ImageIndex = 2;
		nodWork->SelectedIndex = 3;
		Memo1->Visible = false;
		Image1->Visible = false;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Add1Click(TObject *Sender) {
	TdogeAdd *dogeAdd = new TdogeAdd(this);
	dogeAdd->ShowModal();
}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::dogsTreeChange(TObject *Sender, TTreeNode *Node) {
	if (dogsTree->Selected != nodFight) {
		if (dogsTree->Selected != nodToy) {
			if (dogsTree->Selected != nodWork) {
				try {
					Memo1->Lines->LoadFromFile(dogsTree->Selected->Text);
					Image1->Picture->LoadFromFile
						(dogsTree->Selected->Text + ".jpg");
					Memo1->Visible = true;
					Image1->Visible = true;
				}
				catch (...) {
				}
			}
		}
	}
	else {
		Memo1->Visible = false;
		Image1->Visible = false;
	}
}

// ---------------------------------------------------------------------------
void __fastcall TDogForm::FormCreate(TObject *Sender) {
	dogsTree->Items->Clear();
	nodFight = dogsTree->Items->Add(NULL, "��������");
	nodFight->ImageIndex = 0;
	nodFight->SelectedIndex = 3;
	nodToy = dogsTree->Items->Add(NULL, "������������");
	nodToy->ImageIndex = 1;
	nodToy->SelectedIndex = 3;
	nodWork = dogsTree->Items->Add(NULL, "���������");
	nodWork->ImageIndex = 2;
	nodWork->SelectedIndex = 3;
}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::Delete1Click(TObject *Sender) {
	if (MessageDlg("�� ������������� ������ ������� ������?", mtConfirmation,
		TMsgDlgButtons() << mbOK << mbCancel, 0) == mrOk) {
		if ((dogsTree->Selected != nodFight) && ((dogsTree->Selected != nodToy)
			&& (dogsTree->Selected != nodWork))) {
			DeleteFile(dogsTree->Selected->Text);
			DeleteFile(dogsTree->Selected->Text + ".jpg");
			dogsTree->Selected->Delete();
			Memo1->Visible = false;
			Image1->Visible = false;
			Memo1->Clear();
			Image1->Picture->Bitmap->FreeImage();
			Image1->Picture->Bitmap = NULL;
		}
		else
			MessageDlg("�������� �������� ����� ����������", mtWarning,
			TMsgDlgButtons() << mbOK, 0);
	}
}

// ---------------------------------------------------------------------------
void __fastcall TDogForm::About1Click(TObject *Sender) {
	AboutBox->ShowModal();
}
// ---------------------------------------------------------------------------

void __fastcall TDogForm::N5Click(TObject *Sender) {
	SearchForm->ShowModal();
}
// ---------------------------------------------------------------------------
