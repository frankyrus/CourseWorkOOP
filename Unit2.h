// ---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <jpeg.hpp>

// #include "Unit1.h"
// ---------------------------------------------------------------------------
class TdogeAdd : public TForm {
__published: // IDE-managed Components

	TLabel *WeightLabel;
	TLabel *LifeLabel;
	TLabel *TallLabel;
	TComboBox *BreedComboBox;
	TLabel *QualityLabel;
	TLabel *BreedLabel;
	TEdit *BreedEdit;
	TEdit *LifeEdit;
	TEdit *TallEdit;
	TEdit *WeightEdit;
	TEdit *QualityEdit;
	TLabel *AboutLabel;
	TMemo *AboutMemo;
	TButton *AddButton;
	TButton *ImageButton;
	TImage *DogSmallImage;

	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall ImageButtonClick(TObject *Sender);

private: // User declarations
		public : // User declarations
	__fastcall TdogeAdd(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TdogeAdd *dogeAdd;
// ---------------------------------------------------------------------------
#endif
