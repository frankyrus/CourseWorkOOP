// ---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

// ---------------------------------------------------------------------------

 class HomeAnimal {

};

class ExpoAnimal : public HomeAnimal {

};

class BasicDog : public ExpoAnimal {

};

class WorkingDog : public BasicDog {

};

class FightingDog : public BasicDog {

};

class ToyDog : public BasicDog {

};

class TDogForm : public TForm {
__published: // IDE-managed Components
		private : // User declarations
		public : // User declarations
		__fastcall TDogForm(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TDogForm *DogForm;
// ---------------------------------------------------------------------------
#endif
