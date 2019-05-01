//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::BitBtn1Click(TObject *Sender)
{
	Form1->StringGrid1->Cells[9][0] = Edit1->Text;
	Form1->StringGrid1->Cells[10][0] = Edit2->Text;
	Form1->StringGrid1->Cells[11][0] = Edit3->Text;
	Form1->ComboBox7->Text = Edit1->Text;
	Form1->ComboBox8->Text = Edit2->Text;
	Form1->ComboBox9->Text = Edit3->Text;

	Form1->StringGrid1->Cells[4][0] = Edit4->Text;
	Form1->StringGrid1->Cells[5][0] = Edit5->Text;
	Form1->StringGrid1->Cells[6][0] = Edit6->Text;
	Form1->StringGrid1->Cells[7][0] = Edit7->Text;
	Form1->StringGrid1->Cells[8][0] = Edit8->Text;
	Form1->ComboBox2->Text = Edit4->Text;
	Form1->ComboBox3->Text = Edit5->Text;
	Form1->ComboBox4->Text = Edit6->Text;
	Form1->ComboBox5->Text = Edit7->Text;
	Form1->ComboBox6->Text = Edit8->Text;
}
//---------------------------------------------------------------------------
