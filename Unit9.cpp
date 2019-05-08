//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
	/*----------������� �������� ����� ��������� ��������� ������-------*/
	float averageMarkExam1 = 0,
		averageMarkExam2 = 0,
		averageMarkExam3 = 0,
		sortRow = 0;

	for (int i = 1; i < Form1->StringGrid1->RowCount; i++)
			if (Edit1->Text == Form1->StringGrid1->Cells[3][i])
			{
			   averageMarkExam1 += StrToInt(Form1->StringGrid1->Cells[9][i]);
			   sortRow++;
			}
	averageMarkExam1 /= sortRow;
	sortRow = 0;

	for (int i = 1; i < Form1->StringGrid1->RowCount; i++)
			if (Edit1->Text == Form1->StringGrid1->Cells[3][i])
			{
			   averageMarkExam2 += StrToInt(Form1->StringGrid1->Cells[10][i]);
			   sortRow++;
			}
	averageMarkExam2 /= sortRow;
	sortRow = 0;

	for (int i = 1; i < Form1->StringGrid1->RowCount; i++)
			if (Edit1->Text == Form1->StringGrid1->Cells[3][i])
			{
			   averageMarkExam3 += StrToInt(Form1->StringGrid1->Cells[11][i]);
			   sortRow++;
			}
	averageMarkExam3 /= sortRow;
	sortRow = 0;

	Label2->Caption = averageMarkExam1;
	Label3->Caption = averageMarkExam2;
	Label4->Caption = averageMarkExam3;

	Form2->Show();
}
//---------------------------------------------------------------------------
