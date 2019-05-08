﻿//---------------------------------------------------------------------------
#include <vcl.h>
#include <stdio.h>
#include <vector>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
using namespace std;
//---------------------------------------------------------------------------
TForm1 *Form1;
//----------Cтруктура---------------------------------------------
struct TStudent
{
   UnicodeString surname;
   UnicodeString name;
   UnicodeString otchestvo;
   UnicodeString groupNumber;
   UnicodeString offset[5];
   int exam[3];
   UnicodeString defrayal;
};
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//----------Глобальные объекты-----------------------------------------------
vector <TStudent> student;
TStudent studStruct;
//----------Заполнение фиксированых ячеек таблицы----------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[0][0] = "Фамилия";
	StringGrid1->Cells[1][0] = "Имя";
	StringGrid1->Cells[2][0] = "Отчество";
	StringGrid1->Cells[3][0] = "№ группы";
	StringGrid1->Cells[4][0] = "Зачет 1";
	StringGrid1->Cells[5][0] = "Зачет 2";
	StringGrid1->Cells[6][0] = "Зачет 3";
	StringGrid1->Cells[7][0] = "Зачет 4";
	StringGrid1->Cells[8][0] = "Зачет 5";
	StringGrid1->Cells[9][0] = "Экзамен 1";
	StringGrid1->Cells[10][0] = "Экзамен 2";
	StringGrid1->Cells[11][0] = "Экзамен 3";
	StringGrid1->Cells[12][0] = "Вид оплаты";
}
//----------Автор------------------------------------------------------------
void __fastcall TForm1::N11Click(TObject *Sender)
{
	MessageDlg("Автор приложения: студент группы ИСТ-11 Сорочук Евгений, БарГу", mtInformation, TMsgDlgButtons() << mbCancel  ,0);
}
//----------Вывод списка студентов по номеру группы--------------------------
void __fastcall TForm1::N7Click(TObject *Sender)
{
	Form5->ShowModal();
}
//----------Функция подсчета среднего балла бюджетников----------------------
void calcAveragMarkBudget(int a, int *form1RowsCounter,
	 float *averageMarkExam, int *sortRowsCounter, TStringGrid *StringGrid1)
{
	for (int i = 1; i < *form1RowsCounter; i++)
		if(StringGrid1->Cells[12][i] == "Госбюджет")
		{
			*averageMarkExam += StrToFloat(StringGrid1->Cells[a][i]);
			(*sortRowsCounter)++;
		}
	*averageMarkExam /= *sortRowsCounter;
	*sortRowsCounter = 0;
}
//----------Подсчет среднего балла бюджетников-------------------------------
void __fastcall TForm1::N8Click(TObject *Sender)
{
	Form6->Memo1->Clear();

	int form1RowsCounter, sortRowsCounter = 0;                 // sortRowsCounter запоминает кол-во
	float averageMarkExam = 0;  // Средний балл за экзамен    // считаных конструкцией if строк

	form1RowsCounter = StrToInt(StringGrid1->RowCount);

	calcAveragMarkBudget(9, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("\tСредний балл студентов(госбюджет)");
	Form6->Memo1->Lines->Add("Средний балл за экзамен по " +
	StringGrid1->Cells[9][0] + ": " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	calcAveragMarkBudget(10, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("Средний балл за экзамен по " +
	StringGrid1->Cells[10][0] + ": " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	calcAveragMarkBudget(11, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("Средний балл за экзамен по " +
	StringGrid1->Cells[11][0] + ": " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	Form6->ShowModal();
}
//----------Функция подсчета среднего балла платников------------------------
void calcAveragMarkPay(int a, int *form1RowsCounter,
	 float *averageMarkExam, int *sortRowsCounter, TStringGrid *StringGrid1)
{
	for (int i = 1; i < *form1RowsCounter; i++)
		if(StringGrid1->Cells[12][i] == "Коммерческая")
		{
			*averageMarkExam += StrToFloat(StringGrid1->Cells[a][i]);
			(*sortRowsCounter)++;
		}
	*averageMarkExam /= *sortRowsCounter;
	*sortRowsCounter = 0;
}
//----------Подсчет среднего балла платников---------------------------------
void __fastcall TForm1::N9Click(TObject *Sender)
{
	Form6->Memo1->Clear();

	int form1RowsCounter, sortRowsCounter = 0;                  // sortRowsCounter запоминает кол-во
	float averageMarkExam = 0;  // Средний балл за экзамен   // считаных конструкцией if строк

	form1RowsCounter = StrToInt(Form1->StringGrid1->RowCount);

	calcAveragMarkPay(9, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("\tСредний балл студентов(коммерческ)");
	Form6->Memo1->Lines->Add("Средний балл за экзамен по " +
	StringGrid1->Cells[9][0] + ": " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	calcAveragMarkPay(10, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("Средний балл за экзамен по " +
	StringGrid1->Cells[10][0] + ": " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	calcAveragMarkPay(11, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("Средний балл за экзамен по " +
	StringGrid1->Cells[11][0] + ": " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	Form6->ShowModal();
}
//----------Добавление студента----------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if ((Edit1->Text != "") && (Edit2->Text != "") && (Edit3->Text != "") &&
	(Edit4->Text != "") &&
	(ComboBox2->Text == "Зачет") || (ComboBox2->Text == "Незачет") &&
	(ComboBox3->Text == "Зачет") || (ComboBox3->Text == "Незачет") &&
	(ComboBox4->Text == "Зачет") || (ComboBox4->Text == "Незачет") &&
	(ComboBox5->Text == "Зачет") || (ComboBox5->Text == "Незачет") &&
	(ComboBox6->Text == "Зачет") || (ComboBox6->Text == "Незачет") &&
	(ComboBox1->Text == "Госбюджет") || (ComboBox1->Text == "Коммерческая"))
	{
		studStruct.surname = Edit1->Text; studStruct.name = Edit2->Text;
		studStruct.otchestvo = Edit3->Text; studStruct.groupNumber = Edit4->Text;
		studStruct.offset[0] = ComboBox2->Text; studStruct.offset[1] = ComboBox3->Text;
		studStruct.offset[2] = ComboBox4->Text; studStruct.offset[3] = ComboBox5->Text;
		studStruct.offset[4] = ComboBox6->Text; studStruct.exam[0] = StrToInt(ComboBox7->Text);
		studStruct.exam[1] = StrToInt(ComboBox8->Text); studStruct.exam[2] = StrToInt(ComboBox9->Text);
		studStruct.defrayal = ComboBox1->Text;

		student.push_back(studStruct);

		/*----очистка StringGrid----*/
		for (int i = 1; i < StringGrid1->RowCount; i++)
			for (int j = 0; j < StringGrid1->ColCount; j++)
				StringGrid1->Cells[j][i] = "";

		if (student.size() < 2) {
			StringGrid1->Cells[0][StringGrid1->RowCount] = student[0].surname;
			StringGrid1->Cells[1][StringGrid1->RowCount] = student[0].name;
			StringGrid1->Cells[2][StringGrid1->RowCount] = student[0].otchestvo;
			StringGrid1->Cells[3][StringGrid1->RowCount] = student[0].groupNumber;
			StringGrid1->Cells[4][StringGrid1->RowCount] = student[0].offset[0];
			StringGrid1->Cells[5][StringGrid1->RowCount] = student[0].offset[1];
			StringGrid1->Cells[6][StringGrid1->RowCount] = student[0].offset[2];
			StringGrid1->Cells[7][StringGrid1->RowCount] = student[0].offset[3];
			StringGrid1->Cells[8][StringGrid1->RowCount] = student[0].offset[4];
			StringGrid1->Cells[9][StringGrid1->RowCount] = IntToStr(student[0].exam[0]);
			StringGrid1->Cells[10][StringGrid1->RowCount] = IntToStr(student[0].exam[1]);
			StringGrid1->Cells[11][StringGrid1->RowCount] = IntToStr(student[0].exam[2]);
			StringGrid1->Cells[12][StringGrid1->RowCount] = student[0].defrayal;
		} else
		{
			/*----Сортировка вектора----*/
			for (unsigned i = 0; i < student.size() - 1; i++)
			{
				int imin = i;
				for (unsigned j = i + 1; j < student.size(); j++ )
					if ( student[j].surname < student[imin].surname ) imin = j;
				TStudent a = student[i]; // обмен двух элементов массива структур
				student[i] = student[imin];
				student[imin] = a;
			}

			/*----Запись вектора структур в StringGrid----*/
			for (int j = 1; j < StringGrid1->RowCount + 1; j++)
			{
				StringGrid1->Cells[0][j] = student[j - 1].surname;
				StringGrid1->Cells[1][j] = student[j - 1].name;
				StringGrid1->Cells[2][j] = student[j - 1].otchestvo;
				StringGrid1->Cells[3][j] = student[j - 1].groupNumber;
				StringGrid1->Cells[4][j] = student[j - 1].offset[0];
				StringGrid1->Cells[5][j] = student[j - 1].offset[1];
				StringGrid1->Cells[6][j] = student[j - 1].offset[2];
				StringGrid1->Cells[7][j] = student[j - 1].offset[3];
				StringGrid1->Cells[8][j] = student[j - 1].offset[4];
				StringGrid1->Cells[9][j] = IntToStr(student[j - 1].exam[0]);
				StringGrid1->Cells[10][j] = IntToStr(student[j - 1].exam[1]);
				StringGrid1->Cells[11][j] = IntToStr(student[j - 1].exam[2]);
				StringGrid1->Cells[12][j] = student[j - 1].defrayal;
			}
		}
		StringGrid1->RowCount++;

		Edit1->Text = ""; Edit2->Text = "";
		Edit3->Text = ""; Edit4->Text = "";
		ComboBox1->Text = "Вид оплаты";
		ComboBox2->Text = StringGrid1->Cells[4][0];
		ComboBox3->Text = StringGrid1->Cells[5][0];
		ComboBox4->Text = StringGrid1->Cells[6][0];
		ComboBox5->Text = StringGrid1->Cells[7][0];
		ComboBox6->Text = StringGrid1->Cells[8][0];
		ComboBox7->Text = StringGrid1->Cells[9][0];
		ComboBox8->Text = StringGrid1->Cells[10][0];
		ComboBox9->Text = StringGrid1->Cells[11][0];
	} else {
		ShowMessage("Введите корректные данные!");
	}
}
//----------Подсчет общего среднего балла группы-----------------------------
void __fastcall TForm1::N10Click(TObject *Sender)
{
	Form7->ShowModal();
}
//----------График-----------------------------------------------------------
void __fastcall TForm1::N14Click(TObject *Sender)
{
	Form9->Show();
}
//----------Закрашивание ячеек StringGrid------------------------------------
void __fastcall TForm1::StringGrid1DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
		  TGridDrawState State)
{
	int x, y;
	x = Rect.Left + (Rect.Width() - StringGrid1->Canvas->TextWidth(StringGrid1->Cells[ACol][ARow]))/2;
	y = Rect.Top + (Rect.Height() - StringGrid1->Canvas->TextHeight(StringGrid1->Cells[ACol][ARow]))/2;
	if(ACol > -1 && ARow == 0)
	{
		StringGrid1->Canvas->Brush->Color = RGB(255, 108, 95);
		StringGrid1->Canvas->Pen->Color = RGB(238, 203, 173);
		StringGrid1->Canvas->Rectangle(Rect);
		StringGrid1->Canvas->TextOut(x,y,StringGrid1->Cells[ACol][ARow]);
	}
	if (ACol > -1 && ARow != 0)
	{
		StringGrid1->Canvas->Brush->Color = RGB(255, 193, 104);
		StringGrid1->Canvas->Pen->Color = RGB(238, 203, 173);
		StringGrid1->Canvas->Rectangle(Rect);
		StringGrid1->Canvas->TextOut(x,y,StringGrid1->Cells[ACol][ARow]);
	}
}
//----------Заполнить ячейки экзаменов и зачетов-----------------------------
void __fastcall TForm1::N17Click(TObject *Sender)
{
	Form4->ShowModal();
}
//----------Новая таблица----------------------------------------------------
void __fastcall TForm1::N16Click(TObject *Sender)
{
	if (MessageDlg("Вы уверены? Данные будут потеряны!\nДля сохранения данных таблицы воспользуйтесь вкладкой 'Сохранить'", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)
	{
		/*----очистка StringGrid----*/
		for (int i = 1; i < StringGrid1->RowCount; i++)
			StringGrid1->Rows[i]->Clear();
		StringGrid1->RowCount = 1;

		/*----Очистка вектора----*/
		if (student.size() != 0)
			student.clear();
	}
}
//----------Сохранение таблицы в файл----------------------------------------
void __fastcall TForm1::N18Click(TObject *Sender)
{
	TStringList *Table1 = new TStringList;

	if (SaveDialog1->Execute())
		for(int i = 0; i < StringGrid1->RowCount; i++)
			Table1->Add(StringGrid1->Rows[i]->DelimitedText);

	Table1->SaveToFile(SaveDialog1->FileName + ".txt");

	delete Table1;
}
//----------Загрузка таблицы из файла----------------------------------------
void __fastcall TForm1::N19Click(TObject *Sender)
{
	/*----очистка вектора----*/
	if (student.size() != 0)
		student.clear();

	TStringList *Table1 = new TStringList;

	if (OpenDialog1->Execute())
	{
		Table1->LoadFromFile(OpenDialog1->FileName);
		StringGrid1->RowCount = Table1->Count;

		for(int i = 0; i < StringGrid1->RowCount; i++)
			StringGrid1->Rows[i]->DelimitedText = Table1->Strings[i];

	delete Table1;

		/*----запись таблицы в вектор----*/
		for (int i = 1; i < StringGrid1->RowCount; i++)
		{
			studStruct.surname = StringGrid1->Cells[0][i];
			studStruct.name = StringGrid1->Cells[1][i];
			studStruct.otchestvo = StringGrid1->Cells[2][i];
			studStruct.groupNumber = StringGrid1->Cells[3][i];
			studStruct.offset[0] = StringGrid1->Cells[4][i];
			studStruct.offset[1] = StringGrid1->Cells[5][i];
			studStruct.offset[2] = StringGrid1->Cells[6][i];
			studStruct.offset[3] = StringGrid1->Cells[7][i];
			studStruct.offset[4] = StringGrid1->Cells[8][i];
			studStruct.exam[0] = StrToInt(StringGrid1->Cells[9][i]);
			studStruct.exam[1] = StrToInt(StringGrid1->Cells[10][i]);
			studStruct.exam[2] = StrToInt(StringGrid1->Cells[11][i]);
			studStruct.defrayal = StringGrid1->Cells[12][i];
			student.push_back(studStruct);
		}

		/*----очистка StringGrid----*/
		for (int i = 1; i < StringGrid1->RowCount; i++)
			for (int j = 0; j < StringGrid1->ColCount; j++)
				StringGrid1->Cells[j][i] = "";

		/*----сортировка вектора----*/
		for (unsigned i = 0; i < student.size() - 1; i++)
		{
			int imin = i;
			for (unsigned j = i + 1; j < student.size(); j++ )
				if ( student[j].surname < student[imin].surname ) imin = j;
			TStudent a = student[i]; // îáìåí äâóõ ýëåìåíòîâ ìàññèâà ñòðóêòóð
			student[i] = student[imin];
			student[imin] = a;
		}

		/*----вывод вектора в StringGrid----*/
		for (int j = 1; j < StringGrid1->RowCount + 1; j++)
		{
			StringGrid1->Cells[0][j] = student[j - 1].surname;
			StringGrid1->Cells[1][j] = student[j - 1].name;
			StringGrid1->Cells[2][j] = student[j - 1].otchestvo;
			StringGrid1->Cells[3][j] = student[j - 1].groupNumber;
			StringGrid1->Cells[4][j] = student[j - 1].offset[0];
			StringGrid1->Cells[5][j] = student[j - 1].offset[1];
			StringGrid1->Cells[6][j] = student[j - 1].offset[2];
			StringGrid1->Cells[7][j] = student[j - 1].offset[3];
			StringGrid1->Cells[8][j] = student[j - 1].offset[4];
			StringGrid1->Cells[9][j] = IntToStr(student[j - 1].exam[0]);
			StringGrid1->Cells[10][j] = IntToStr(student[j - 1].exam[1]);
			StringGrid1->Cells[11][j] = IntToStr(student[j - 1].exam[2]);
			StringGrid1->Cells[12][j] = student[j - 1].defrayal;
		}
	}
}
//----------Внесение изменений в таблицу-------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
	StringGrid1->Options = StringGrid1->Options << goEditing;
	ShowMessage("Корректирование таблицы разрешено!");
	Button2->Show();
}
//----------Удалить студента-------------------------------------------------
void __fastcall TForm1::N3Click(TObject *Sender)
{
	Form8->ShowModal();
	Button2->Show();
}
//----------Сохранить корректировку------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	/*----Очистка вектора----*/
	if (student.size() != 0)
		student.clear();

	if (StringGrid1->RowCount != 1)
	{
		/*Запись в вектор данных таблицы*/
		for (int i = 1; i < StringGrid1->RowCount; i++)
		{
			studStruct.surname = StringGrid1->Cells[0][i];
			studStruct.name = StringGrid1->Cells[1][i];
			studStruct.otchestvo = StringGrid1->Cells[2][i];
			studStruct.groupNumber = StringGrid1->Cells[3][i];
			studStruct.offset[0] = StringGrid1->Cells[4][i];
			studStruct.offset[1] = StringGrid1->Cells[5][i];
			studStruct.offset[2] = StringGrid1->Cells[6][i];
			studStruct.offset[3] = StringGrid1->Cells[7][i];
			studStruct.offset[4] = StringGrid1->Cells[8][i];
			studStruct.exam[0] = StrToInt(StringGrid1->Cells[9][i]);
			studStruct.exam[1] = StrToInt(StringGrid1->Cells[10][i]);
			studStruct.exam[2] = StrToInt(StringGrid1->Cells[11][i]);
			studStruct.defrayal = StringGrid1->Cells[12][i];
			student.push_back(studStruct);
		}

		/*----очистка StringGrid----*/
		for (int i = 1; i < StringGrid1->RowCount; i++)
			for (int j = 0; j < StringGrid1->ColCount; j++)
				StringGrid1->Cells[j][i] = "";

		/*----Сортировка вектора----*/
		for (unsigned i = 0; i < student.size() - 1; i++)
		{
			int imin = i;
			for (unsigned j = i + 1; j < student.size(); j++ )
				if ( student[j].surname < student[imin].surname ) imin = j;
			TStudent a = student[i]; // обмен двух элементов массива структур
			student[i] = student[imin];
			student[imin] = a;
		}

		/*----Запись вектора структур в StringGrid----*/
		for (int j = 1; j < StringGrid1->RowCount + 1; j++)
		{
			StringGrid1->Cells[0][j] = student[j - 1].surname;
			StringGrid1->Cells[1][j] = student[j - 1].name;
			StringGrid1->Cells[2][j] = student[j - 1].otchestvo;
			StringGrid1->Cells[3][j] = student[j - 1].groupNumber;
			StringGrid1->Cells[4][j] = student[j - 1].offset[0];
			StringGrid1->Cells[5][j] = student[j - 1].offset[1];
			StringGrid1->Cells[6][j] = student[j - 1].offset[2];
			StringGrid1->Cells[7][j] = student[j - 1].offset[3];
			StringGrid1->Cells[8][j] = student[j - 1].offset[4];
			StringGrid1->Cells[9][j] = IntToStr(student[j - 1].exam[0]);
			StringGrid1->Cells[10][j] = IntToStr(student[j - 1].exam[1]);
			StringGrid1->Cells[11][j] = IntToStr(student[j - 1].exam[2]);
			StringGrid1->Cells[12][j] = student[j - 1].defrayal;
		}

		Button2->Visible = False;
	}
	else
    	Button2->Visible = False;
}
//---------------------------------------------------------------------------

