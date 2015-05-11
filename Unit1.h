// ---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Dialogs.hpp>
#include <jpeg.hpp>
#include <Vcl.ExtCtrls.hpp>

// ---------------------------------------------------------------------------

class HomeAnimal {
	int weight;
	int height;
	bool sourceOfFood;
	bool sourceOfMaterials;
	bool sourceOfFun;
	bool needHome;
	String food;
	String type;

public:
	void setComfort() {
		sourceOfFood = false;
		sourceOfMaterials = false;
		sourceOfFun = true;
	}

	void setMaterial() {
		sourceOfFood = false;
		sourceOfMaterials = true;
		sourceOfFun = false;
	}

	void setUtility() {
		sourceOfFood = true;
		sourceOfMaterials = true;
		sourceOfFun = false;
	}
};

class ExpoAnimal : public HomeAnimal {
	char appearance;
	char hair;
	char behavior;
	String pedigree[3];
};

class BasicDog : public ExpoAnimal {
	String bred;
	char age;

	SetComfort();
};

class WorkingDog : public BasicDog {
	String work;
	String learnanble;
	char workTime;

};

class FightingDog : public BasicDog {
	char damage;
	char averageFights;
	char musculs;

};

class ToyDog : public BasicDog {
	bool needMask;

};

class TDogForm : public TForm {
__published: // IDE-managed Components

	TMainMenu *MainMenu1;
	TMenuItem *A1;
	TMenuItem *Open1;
	TMenuItem *Save1;
	TMenuItem *N1;
	TMenuItem *Exit1;
	TMenuItem *Help1;
	TMenuItem *About1;
	TMenuItem *Edit1;
	TMenuItem *Add1;
	TMenuItem *Delete1;
	TTreeView *dogsTree;
	TImageList *DogsImages;
	TOpenDialog *OpenDialog1;
	TSaveDialog *SaveDialog1;
	TMenuItem *Cleartree1;
	TMemo *Memo1;
	TImage *Image1;
	TPopupMenu *PopupMenu1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;

	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall Save1Click(TObject *Sender);
	void __fastcall Open1Click(TObject *Sender);
	void __fastcall Clear1Click(TObject *Sender);
	void __fastcall Add1Click(TObject *Sender);
	void __fastcall dogsTreeChange(TObject *Sender, TTreeNode *Node);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Delete1Click(TObject *Sender);
	void __fastcall About1Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);

private: // User declarations
		public : // User declarations
	__fastcall TDogForm(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TDogForm *DogForm;
extern TTreeNode * nodFight;
extern TTreeNode * nodToy;
extern TTreeNode * nodWork;
// ---------------------------------------------------------------------------
#endif
