//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//----------����� ��������� �� ������ ������ � �������-----------------------
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
//----------������� ������ ����� ������--------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
	float averageMarkGroup = 0, iterationCounter = 0;

	for (int i = 0; i < Form1->StringGrid1->RowCount; i++)
		if (Edit1->Text == Form1->StringGrid1->Cells[3][i])
		{
			averageMarkGroup += StrToFloat(Form1->StringGrid1->Cells[9][i]);
			averageMarkGroup += StrToFloat(Form1->StringGrid1->Cells[10][i]);
			averageMarkGroup += StrToFloat(Form1->StringGrid1->Cells[11][i]);
			iterationCounter += 3;
		}
	averageMarkGroup /= iterationCounter;

	Form6->Memo1->Lines->Add("����� ������� ���� ������ " + Edit1->Text + ": " +
							FloatToStrF(averageMarkGroup,ffFixed,3,2));

	Form6->Show(); Close();
}
//----------������� �������� ����� ��������� ��������� ������----------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
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

	Form2->Show(); Close();
}

