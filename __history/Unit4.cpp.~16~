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
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	int rowsCounter;
	rowsCounter = StrToInt(Form1->StringGrid1->RowCount);
	Form1->StringGrid1->Cells[0][rowsCounter] = Edit1->Text;
	Form1->StringGrid1->Cells[1][rowsCounter] = Edit2->Text;
	Form1->StringGrid1->Cells[2][rowsCounter] = Edit3->Text;
	Form1->StringGrid1->Cells[3][rowsCounter] = Edit4->Text;
	Form1->StringGrid1->Cells[4][rowsCounter] = ComboBox2->Text;
	Form1->StringGrid1->Cells[5][rowsCounter] = ComboBox3->Text;
	Form1->StringGrid1->Cells[6][rowsCounter] = ComboBox4->Text;
	Form1->StringGrid1->Cells[7][rowsCounter] = ComboBox5->Text;
	Form1->StringGrid1->Cells[8][rowsCounter] = ComboBox6->Text;
	Form1->StringGrid1->Cells[9][rowsCounter] = ComboBox7->Text;
	Form1->StringGrid1->Cells[10][rowsCounter] = ComboBox8->Text;
	Form1->StringGrid1->Cells[11][rowsCounter] = ComboBox9->Text;
	Form1->StringGrid1->Cells[12][rowsCounter] = ComboBox1->Text;
	rowsCounter++;
	Form1->StringGrid1->RowCount++;
	Edit1->Text = ""; Edit2->Text = ""; Edit3->Text = ""; Edit4->Text = "";
	ComboBox1->ItemIndex = -1;  ComboBox2->ItemIndex = -1;  ComboBox3->ItemIndex = -1;
	ComboBox4->ItemIndex = -1; ComboBox5->ItemIndex = -1; ComboBox6->ItemIndex = -1;
	ComboBox7->ItemIndex = -1; ComboBox8->ItemIndex = -1; ComboBox9->ItemIndex = -1;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

