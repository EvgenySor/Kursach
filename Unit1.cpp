//---------------------------------------------------------------------------
#include <vcl.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
using namespace std;
//---------------------------------------------------------------------------
TForm1 *Form1;
//---------------------------------------------------------------------------
struct TStudent
{
   UnicodeString surname;
   UnicodeString name;
   UnicodeString otchestvo;
   UnicodeString groupNumber;
   UnicodeString offset[5];
   int exam[3];
   UnicodeString defrayal;
   int birth_year;
};
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
vector <TStudent> student;
TStudent studStruct;
int iterCounter = 0;
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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int rowsCounter;
	rowsCounter = StrToInt(StringGrid1->RowCount);

	studStruct.surname = Edit1->Text; studStruct.name = Edit2->Text;
	studStruct.otchestvo = Edit3->Text; studStruct.groupNumber = Edit4->Text;
	studStruct.offset[0] = ComboBox2->Text; studStruct.offset[1] = ComboBox3->Text;
	studStruct.offset[2] = ComboBox4->Text; studStruct.offset[3] = ComboBox5->Text;
	studStruct.offset[4] = ComboBox6->Text; studStruct.exam[0] = StrToInt(ComboBox7->Text);
	studStruct.exam[1] = StrToInt(ComboBox8->Text); studStruct.exam[2] = StrToInt(ComboBox9->Text);
	studStruct.defrayal = ComboBox1->Text;  studStruct.birth_year = StrToInt(Edit5->Text);

	student.push_back(studStruct);

	for (int i = 1; i < rowsCounter; i++)
		for (int j = 0; j < StringGrid1->ColCount; j++)
			StringGrid1->Cells[j][i] = "";

	if (student.size() < 2)
	{
		StringGrid1->Cells[0][rowsCounter] = student[student.size() - 1].surname;
		StringGrid1->Cells[1][rowsCounter] = student[student.size() - 1].name;
		StringGrid1->Cells[2][rowsCounter] = student[student.size() - 1].otchestvo;
		StringGrid1->Cells[3][rowsCounter] = student[student.size() - 1].groupNumber;
		StringGrid1->Cells[4][rowsCounter] = student[student.size() - 1].offset[0];
		StringGrid1->Cells[5][rowsCounter] = student[student.size() - 1].offset[1];
		StringGrid1->Cells[6][rowsCounter] = student[student.size() - 1].offset[2];
		StringGrid1->Cells[7][rowsCounter] = student[student.size() - 1].offset[3];
		StringGrid1->Cells[8][rowsCounter] = student[student.size() - 1].offset[4];
		StringGrid1->Cells[9][rowsCounter] = IntToStr(student[student.size() - 1].exam[0]);
		StringGrid1->Cells[10][rowsCounter] = IntToStr(student[student.size() - 1].exam[1]);
		StringGrid1->Cells[11][rowsCounter] = IntToStr(student[student.size() - 1].exam[2]);
		StringGrid1->Cells[12][rowsCounter] = student[student.size() - 1].defrayal;
	} else {
		for ( int i = 0; i < student.size() - 1; i++)
		{
			int imin = i;
			for ( int j = i + 1; j < student.size(); j++ )
				if ( student[j].surname < student[imin].surname ) imin = j;
			TStudent a = student[i]; // обмен двух элементов массива структур
			student[i] = student[imin];
			student[imin] = a;
		}

		int s = 0;
			for (int j = 1; j < StringGrid1->RowCount + 1; j++) {
				StringGrid1->Cells[0][j] = student[s].surname;
				StringGrid1->Cells[1][j] = student[s].name;
				StringGrid1->Cells[2][j] = student[s].otchestvo;
				StringGrid1->Cells[3][j] = student[s].groupNumber;
				StringGrid1->Cells[4][j] = student[s].offset[0];
				StringGrid1->Cells[5][j] = student[s].offset[1];
				StringGrid1->Cells[6][j] = student[s].offset[2];
				StringGrid1->Cells[7][j] = student[s].offset[3];
				StringGrid1->Cells[8][j] = student[s].offset[4];
				StringGrid1->Cells[9][j] = IntToStr(student[s].exam[0]);
				StringGrid1->Cells[10][j] = IntToStr(student[s].exam[1]);
				StringGrid1->Cells[11][j] = IntToStr(student[s].exam[2]);
				StringGrid1->Cells[12][j] = student[s].defrayal;
				s++;
			}

	}

	rowsCounter++;
	StringGrid1->RowCount++;
	Edit1->Text = ""; Edit2->Text = ""; Edit3->Text = ""; Edit4->Text = "";
	ComboBox1->ItemIndex = -1;  ComboBox2->ItemIndex = -1;  ComboBox3->ItemIndex = -1;
	ComboBox4->ItemIndex = -1; ComboBox5->ItemIndex = -1; ComboBox6->ItemIndex = -1;
	ComboBox7->ItemIndex = -1; ComboBox8->ItemIndex = -1; ComboBox9->ItemIndex = -1;
}
//---------------------------------------------------------------------------

