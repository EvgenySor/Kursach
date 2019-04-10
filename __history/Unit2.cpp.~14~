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
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void countAverageMark(float, int);
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	Form5->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
	int form1RowsCounter, form1CollsCounter, sortRowsCounter = 0; // sortRowsCounter запоминает кол-во
	float averageMarkExam1 = 0,  // Средний балл за экзамен1      // считаных конструкцией if строк
		 averageMarkExam2 = 0,  // Средний балл за экзамен2
		 averageMarkExam3 = 0;  // Средний балл за экзамен3

	form1RowsCounter = StrToInt(Form1->StringGrid1->RowCount);
	form1CollsCounter = StrToInt(Form1->StringGrid1->ColCount);

	for (int i = 1; i < form1RowsCounter; i++)
		if(Form1->StringGrid1->Cells[12][i] == "Госбюджет")
		{
			averageMarkExam1 += StrToFloat(Form1->StringGrid1->Cells[9][i]);
			sortRowsCounter++;
		}
	averageMarkExam1 /= sortRowsCounter;
	sortRowsCounter = 0;

	for (int i = 1; i < form1RowsCounter; i++)
		if(Form1->StringGrid1->Cells[12][i] == "Госбюджет")
		{
			averageMarkExam2 += StrToFloat(Form1->StringGrid1->Cells[10][i]);
			sortRowsCounter++;
		}
	averageMarkExam2 /= sortRowsCounter;
	sortRowsCounter = 0;

	for (int i = 1; i < form1RowsCounter; i++)
		if(Form1->StringGrid1->Cells[12][i] == "Госбюджет")
		{
			averageMarkExam3 += StrToFloat(Form1->StringGrid1->Cells[11][i]);
			sortRowsCounter++;
		}
	averageMarkExam3 /= sortRowsCounter;
	sortRowsCounter = 0;

	ShowMessage("Средний балл за экзамен1: " + FloatToStrF(averageMarkExam1,ffFixed,3,2) + "\n"
	"Средний балл за экзамен2: " + FloatToStrF(averageMarkExam2,ffFixed,3,2) + "\n"
	"Средний балл за экзамен3: " + FloatToStrF(averageMarkExam3,ffFixed,3,2));
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
	int form1RowsCounter, sortRowsCounter = 0; // sortRowsCounter запоминает кол-во
	float averageMarkExam1 = 0,  // Средний балл за экзамен1      // считаных конструкцией if строк
		 averageMarkExam2 = 0,  // Средний балл за экзамен2
		 averageMarkExam3 = 0;  // Средний балл за экзамен3

	form1RowsCounter = StrToInt(Form1->StringGrid1->RowCount);

	for (int i = 1; i < form1RowsCounter; i++)
		if(Form1->StringGrid1->Cells[12][i] == "Коммерческая")
		{
			averageMarkExam1 += StrToFloat(Form1->StringGrid1->Cells[9][i]);
			sortRowsCounter++;
		}
	averageMarkExam1 /= sortRowsCounter;
	sortRowsCounter = 0;

	for (int i = 1; i < form1RowsCounter; i++)
		if(Form1->StringGrid1->Cells[12][i] == "Коммерческая")
		{
			averageMarkExam2 += StrToFloat(Form1->StringGrid1->Cells[10][i]);
			sortRowsCounter++;
		}
	averageMarkExam2 /= sortRowsCounter;
	sortRowsCounter = 0;

	for (int i = 1; i < form1RowsCounter; i++)
		if(Form1->StringGrid1->Cells[12][i] == "Коммерческая")
		{
			averageMarkExam3 += StrToFloat(Form1->StringGrid1->Cells[11][i]);
			sortRowsCounter++;
		}
	averageMarkExam3 /= sortRowsCounter;
	sortRowsCounter = 0;

	ShowMessage("Средний балл за экзамен1: " + FloatToStrF(averageMarkExam1,ffFixed,3,2) + "\n"
	"Средний балл за экзамен2: " + FloatToStrF(averageMarkExam2,ffFixed,3,2) + "\n"
	"Средний балл за экзамен3: " + FloatToStrF(averageMarkExam3,ffFixed,3,2));
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{
	int form1RowsCounter, MarkCounter = 0;
	float groupAverangeMark = 0;

	form1RowsCounter = StrToInt(Form1->StringGrid1->RowCount);

	for (int i = 1; i < form1RowsCounter; i++)
		if(Form5->Edit1->Text == Form1->StringGrid1->Cells[3][i])
		{
			groupAverangeMark += StrToFloat(Form1->StringGrid1->Cells[9][i]);
			groupAverangeMark += StrToFloat(Form1->StringGrid1->Cells[10][i]);
			groupAverangeMark += StrToFloat(Form1->StringGrid1->Cells[11][i]);
			MarkCounter += 3;
		}
	groupAverangeMark /= MarkCounter;
	ShowMessage("Общий балл группы " + Form5->Edit1->Text + FloatToStrF(groupAverangeMark,ffFixed,3,2));
}
//---------------------------------------------------------------------------

