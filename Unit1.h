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

// ---------------------------------------------------------------------------

 class HomeAnimal {
       int weight;
       bool sourceOfFood;
       bool sourceOfMaterials;
       bool sourceOfFun;
       bool needHome;
       AnsiString food;
       AnsiString type;

       public:
              void setComfort()
              {
              sourceOfFood = false;
              sourceOfMaterials = false;
              sourceOfFun = true;
              }
              void setMaterial()
              {
              sourceOfFood = false;
              sourceOfMaterials = true;
              sourceOfFun = false;
              }
              void setUtility()
              {
              sourceOfFood = true;
              sourceOfMaterials = true;
              sourceOfFun = false;
              }
};

class ExpoAnimal : public HomeAnimal {
       char appearance;
       char hair;
       char behavior;
       AnsiString pedigree[3];
};

class BasicDog : public ExpoAnimal {
      AnsiString bred;


      SetComfort();

};

class WorkingDog : public BasicDog {

};

class FightingDog : public BasicDog {

};

class ToyDog : public BasicDog {

};

class TDogForm : public TForm {
__published: // IDE-managed Components
    TListView *ListView1;
    TMainMenu *MainMenu1;
    TMenuItem *A1;
    TMenuItem *Open1;
    TMenuItem *Save1;
    TMenuItem *N1;
    TMenuItem *Exit1;
    void __fastcall Exit1Click(TObject *Sender);
		private : // User declarations
		public : // User declarations
		__fastcall TDogForm(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TDogForm *DogForm;
// ---------------------------------------------------------------------------
#endif
