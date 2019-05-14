//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//----------¬ывод студентов по заданому номеру в таблицу---------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
	int form1RowsCounter, form3RowsCounter;
	form1RowsCounter = StrToInt(Form1->StringGrid1->RowCount);

	for (int i = 1; i < form1RowsCounter; i++)
		if(Edit1->Text == Form1->StringGrid1->Cells[3][i])
		{
			form3RowsCounter = StrToInt(Form3->StringGrid1->RowCount);

			for (int m = 0; m < 13; m++){
				Form3->StringGrid1->Cells[m][form3RowsCounter] = Form1->StringGrid1->Cells[m][i];}
			Form3->StringGrid1->RowCount++;
		}

	Form3->Show(); Close();
}

