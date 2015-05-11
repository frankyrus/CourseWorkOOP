// ---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>

// ---------------------------------------------------------------------------
class TSearchForm : public TForm {
__published: // IDE-managed Components

	TImage *FindedImage;
	TMemo *FindedMemo;
	TLabel *BreedLabel;
	TEdit *BreedEdit;
	TButton *SearchButton;

	void __fastcall FormCreate(TObject *Sender);
	void __fastcall SearchButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);

private: // User declarations
		public : // User declarations
	__fastcall TSearchForm(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TSearchForm *SearchForm;
// ---------------------------------------------------------------------------
#endif
