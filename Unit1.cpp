//---------------------------------------------------------------------------
#include <vcl.h>
#include <stdio.h>
#pragma hdrstop

#include "Unit1.h"
//#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[0][0] = "Фамилия"; StringGrid1->Cells[1][0] = "Имя";
	StringGrid1->Cells[2][0] = "Отчество"; StringGrid1->Cells[3][0] = "№ группы";
	StringGrid1->Cells[4][0] = "Зачет 1"; StringGrid1->Cells[5][0] = "Зачет 2";
	StringGrid1->Cells[6][0] = "Зачет 3"; StringGrid1->Cells[7][0] = "Зачет 4";
	StringGrid1->Cells[8][0] = "Зачет 5"; StringGrid1->Cells[9][0] = "Экзамен 1";
	StringGrid1->Cells[10][0] = "Экзамен 2"; StringGrid1->Cells[11][0] = "Экзамен 3";
	StringGrid1->Cells[12][0] = "Вид оплаты";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N5Click(TObject *Sender)
{
	StringGrid1->Options = StringGrid1->Options << goEditing;
	ShowMessage("Корректирование таблицы разрешено!");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N11Click(TObject *Sender)
{
	MessageDlg("Автор приложения студент группы ИСТ-11 Сорочук Евгений, БарГу", mtInformation, TMsgDlgButtons() << mbCancel  ,0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N1Click(TObject *Sender)
{
	StringGrid1->ColCount = 13; StringGrid1->RowCount = 1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender)
{
	Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N7Click(TObject *Sender)
{
	Form5->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N8Click(TObject *Sender)
{
	int form1RowsCounter, sortRowsCounter = 0;                      // sortRowsCounter запоминает кол-во
	float averageMarkExam1 = 0,  // Средний балл за экзамен1       // считаных конструкцией if строк
		  averageMarkExam2 = 0,  // Средний балл за экзамен2
		  averageMarkExam3 = 0;  // Средний балл за экзамен3

	form1RowsCounter = StrToInt(StringGrid1->RowCount);

	for (int i = 1; i < form1RowsCounter; i++)
		if(StringGrid1->Cells[12][i] == "Госбюджет")
		{
			averageMarkExam1 += StrToFloat(StringGrid1->Cells[9][i]);
			sortRowsCounter++;
		}
	averageMarkExam1 /= sortRowsCounter;
	sortRowsCounter = 0;

	for (int i = 1; i < form1RowsCounter; i++)
		if(StringGrid1->Cells[12][i] == "Госбюджет")
		{
			averageMarkExam2 += StrToFloat(StringGrid1->Cells[10][i]);
			sortRowsCounter++;
		}
	averageMarkExam2 /= sortRowsCounter;
	sortRowsCounter = 0;

	for (int i = 1; i < form1RowsCounter; i++)
		if(StringGrid1->Cells[12][i] == "Госбюджет")
		{
			averageMarkExam3 += StrToFloat(StringGrid1->Cells[11][i]);
			sortRowsCounter++;
		}
	averageMarkExam3 /= sortRowsCounter;
	sortRowsCounter = 0;

	ShowMessage("Средний балл за экзамен1: " + FloatToStrF(averageMarkExam1,ffFixed,3,2) + "\n"
	"Средний балл за экзамен2: " + FloatToStrF(averageMarkExam2,ffFixed,3,2) + "\n"
	"Средний балл за экзамен3: " + FloatToStrF(averageMarkExam3,ffFixed,3,2));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
	int form1RowsCounter, sortRowsCounter = 0;                  // sortRowsCounter запоминает кол-во
	float averageMarkExam1 = 0,  // Средний балл за экзамен1   // считаных конструкцией if строк
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
void __fastcall TForm1::N3Click(TObject *Sender)
{
	TStringList *Table1 = new TStringList;

	if (SaveDialog1->Execute())
		for(int i = 0; i < StringGrid1->RowCount; i++)
			Table1->Add(StringGrid1->Rows[i]->DelimitedText);

	Table1->SaveToFile(SaveDialog1->FileName);

	delete Table1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
	TStringList *Table1 = new TStringList;

	if (OpenDialog1->Execute())
	{
		Table1->LoadFromFile(OpenDialog1->FileName);
		StringGrid1->RowCount = Table1->Count;

		for(int i = 0; i < StringGrid1->RowCount; i++)
			StringGrid1->Rows[i]->DelimitedText = Table1->Strings[i];
	}

	delete Table1;
}
//---------------------------------------------------------------------------

