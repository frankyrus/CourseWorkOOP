// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSearchForm *SearchForm;

// ---------------------------------------------------------------------------
__fastcall TSearchForm::TSearchForm(TComponent* Owner) : TForm(Owner) {
}
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
void __fastcall TSearchForm::FormCreate(TObject *Sender) {
	SearchForm->Height = 76;
}

// ---------------------------------------------------------------------------
void __fastcall TSearchForm::SearchButtonClick(TObject *Sender) {
	try {
		FindedMemo->Lines->LoadFromFile(BreedEdit->Text);
		FindedImage->Picture->LoadFromFile(BreedEdit->Text + ".jpg");
		FindedMemo->Visible = true;
		FindedImage->Visible = true;
		SearchForm->Height = 584;
	}
	catch (...) {
		if (MessageDlg("Ничего не найдено. Повторить поиск?", mtConfirmation,
			TMsgDlgButtons() << mbOK << mbCancel, 0) == mrCancel) {
			SearchForm->Close();
		}
	}
}

// ---------------------------------------------------------------------------
void __fastcall TSearchForm::FormClose(TObject *Sender, TCloseAction &Action) {
	SearchForm->Height = 76;
	FindedMemo->Visible = false;
	FindedImage->Visible = false;
	FindedImage->Picture->Bitmap->FreeImage();
	FindedImage->Picture->Bitmap = NULL;
	FindedMemo->Clear();
	BreedEdit->Text="";
}
// ---------------------------------------------------------------------------
