//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
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
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
	int form1RowsCounter, form1CollsCounter, form3RowsCounter, n;

for (int j = 0; j < form1CollsCounter; j++)

	form1RowsCounter = StrToInt(Form1->StringGrid1->RowCount);
	form1CollsCounter = StrToInt(Form1->StringGrid1->ColCount);

	for (int i = 1; i < form1RowsCounter; i++)
		if(StrToInt(Edit1->Text) == StrToInt(Form1->StringGrid1->Cells[3][i]))
		{
			form3RowsCounter = StrToInt(Form3->StringGrid1->RowCount);

			for (int m = 0; m < form1CollsCounter; m++){
				Form3->StringGrid1->Cells[m][form3RowsCounter] = Form1->StringGrid1->Cells[m][i];}
			Form3->StringGrid1->RowCount++;
		}

	Form3->Show();
}
//---------------------------------------------------------------------------




