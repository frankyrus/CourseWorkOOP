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
//#include "Unit1.h"
// ---------------------------------------------------------------------------
class TdogeAdd : public TForm {
__published: // IDE-managed Components

	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TComboBox *ComboBox1;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TLabel *Label6;
	TMemo *Memo1;
	TButton *Button1;
	TButton *Button2;
	TImage *Image1;

	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);

private: // User declarations
		public : // User declarations
	__fastcall TdogeAdd(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TdogeAdd *dogeAdd;
// ---------------------------------------------------------------------------
#endif
