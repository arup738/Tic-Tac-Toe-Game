//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TGame *Game;
char currentPlayerSymbol = 'X';

//---------------------------------------------------------------------------
__fastcall TGame::TGame(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TGame::ButtonClick(TObject *Sender)
{
	resetButton->Enabled = true;
	resetButton->Opacity = 1;

	TButton *clickedButton = dynamic_cast<TButton*>(Sender);
	clickedButton->Text = currentPlayerSymbol;
    clickedButton->Enabled = false;
	clickedButton->Opacity = 0.6;

	if (currentPlayerSymbol == 'X') {
		currentPlayerSymbol = 'O';
		headerDisplay->Text = "Its Your Turn, Player : O";
	}
	else {
		currentPlayerSymbol = 'X';
		headerDisplay->Text = "Its Your Turn, Player : X";
	}
}



void __fastcall TGame::resetButtonClick(TObject *Sender)
{
	 Button1->Text = "";
	 Button1->Enabled = true;
	 Button1->Opacity = 1;

	 Button2->Text = "";
	 Button2->Enabled = true;
	 Button2->Opacity = 1;

	 Button3->Text = "";
	 Button3->Enabled = true;
	 Button3->Opacity = 1;

	 Button4->Text = "";
	 Button4->Enabled = true;
	 Button4->Opacity = 1;

	 Button5->Text = "";
	 Button5->Enabled = true;
	 Button5->Opacity = 1;

	 Button6->Text = "";
	 Button6->Enabled = true;
	 Button6->Opacity = 1;

	 Button7->Text = "";
	 Button7->Enabled = true;
	 Button7->Opacity = 1;

	 Button8->Text = "";
	 Button8->Enabled = true;
	 Button8->Opacity = 1;

	 Button9->Text = "";
	 Button9->Enabled = true;
	 Button9->Opacity = 1;

	 currentPlayerSymbol = 'X';
	 headerDisplay->Text = "Its Your Turn, Player : X";
	 resetButton->Enabled = false;
	 resetButton->Opacity = 0.6;

}
//---------------------------------------------------------------------------

