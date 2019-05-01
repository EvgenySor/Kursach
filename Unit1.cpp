//---------------------------------------------------------------------------
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
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
using namespace std;
//---------------------------------------------------------------------------
TForm1 *Form1;
//----------C��������---------------------------------------------
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
//----------���������� �������-----------------------------------------------
vector <TStudent> student;
TStudent studStruct;
//----------���������� ������������ ����� �������----------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[0][0] = "�������"; StringGrid1->Cells[1][0] = "���";
	StringGrid1->Cells[2][0] = "��������"; StringGrid1->Cells[3][0] = "� ������";
	StringGrid1->Cells[4][0] = "����� 1"; StringGrid1->Cells[5][0] = "����� 2";
	StringGrid1->Cells[6][0] = "����� 3"; StringGrid1->Cells[7][0] = "����� 4";
	StringGrid1->Cells[8][0] = "����� 5"; StringGrid1->Cells[9][0] = "������� 1";
	StringGrid1->Cells[10][0] = "������� 2"; StringGrid1->Cells[11][0] = "������� 3";
	StringGrid1->Cells[12][0] = "��� ������";

	//Form1->Color = RGB(141, 185, 202);
}
//----------�����------------------------------------------------------------
void __fastcall TForm1::N11Click(TObject *Sender)
{
	MessageDlg("����� ����������: ������� ������ ���-11 ������� �������, �����", mtInformation, TMsgDlgButtons() << mbCancel  ,0);
}
//----------����� �������----------------------------------------------------
void __fastcall TForm1::N1Click(TObject *Sender)
{
	if (MessageDlg("�� �������? ������ ����� ��������!\n��� ���������� ������ ������� �������������� �������� '���������'", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)
	{
		StringGrid1->ColCount = 13; StringGrid1->RowCount = 1;

		/*----������� �������----*/
		if (student.size() != 0)
			for (int j = student.size(); j >= 0; j--)
				student.pop_back();
	}
}
//----------����� ������ ��������� �� ������ ������--------------------------
void __fastcall TForm1::N7Click(TObject *Sender)
{
	Form5->ShowModal();
}
//----------������� �������� �������� ����� �����������----------------------
void calcAveragMarkBudget(int a, int *form1RowsCounter,
	 float *averageMarkExam, int *sortRowsCounter, TStringGrid *StringGrid1)
{
	for (int i = 1; i < *form1RowsCounter; i++)
		if(StringGrid1->Cells[12][i] == "���������")
		{
			*averageMarkExam += StrToFloat(StringGrid1->Cells[a][i]);
			(*sortRowsCounter)++;
		}
	*averageMarkExam /= *sortRowsCounter;
	*sortRowsCounter = 0;
}
//----------������� �������� ����� �����������-------------------------------
void __fastcall TForm1::N8Click(TObject *Sender)
{
	Form6->Memo1->Clear();

	int form1RowsCounter, sortRowsCounter = 0;                 // sortRowsCounter ���������� ���-��
	float averageMarkExam = 0;  // ������� ���� �� �������    // �������� ������������ if �����

	form1RowsCounter = StrToInt(StringGrid1->RowCount);

	calcAveragMarkBudget(9, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("\t����������");
	Form6->Memo1->Lines->Add("������� ���� �� ������� 1: " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	calcAveragMarkBudget(10, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("������� ���� �� ������� 2: " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	calcAveragMarkBudget(11, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("������� ���� �� ������� 3: " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	Form6->ShowModal();
}
//----------������� �������� �������� ����� ���������------------------------
void calcAveragMarkPay(int a, int *form1RowsCounter,
	 float *averageMarkExam, int *sortRowsCounter, TStringGrid *StringGrid1)
{
	for (int i = 1; i < *form1RowsCounter; i++)
		if(StringGrid1->Cells[12][i] == "������������")
		{
			*averageMarkExam += StrToFloat(StringGrid1->Cells[a][i]);
			(*sortRowsCounter)++;
		}
	*averageMarkExam /= *sortRowsCounter;
	*sortRowsCounter = 0;
}
//----------������� �������� ����� ���������---------------------------------
void __fastcall TForm1::N9Click(TObject *Sender)
{
	Form6->Memo1->Clear();

	int form1RowsCounter, sortRowsCounter = 0;                  // sortRowsCounter ���������� ���-��
	float averageMarkExam = 0;  // ������� ���� �� �������   // �������� ������������ if �����

	form1RowsCounter = StrToInt(Form1->StringGrid1->RowCount);

	calcAveragMarkPay(9, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("\t��������");
	Form6->Memo1->Lines->Add("������� ���� �� ������� 1: " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	calcAveragMarkPay(10, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("������� ���� �� ������� 2: " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	calcAveragMarkPay(11, &form1RowsCounter, &averageMarkExam, &sortRowsCounter, StringGrid1);
	Form6->Memo1->Lines->Add("������� ���� �� ������� 3: " + FloatToStrF(averageMarkExam,ffFixed,3,2));
	averageMarkExam = 0;

	Form6->ShowModal();
}
//----------���������� ������� � ����----------------------------------------
void __fastcall TForm1::N3Click(TObject *Sender)
{
	TStringList *Table1 = new TStringList;

	if (SaveDialog1->Execute())
		for(int i = 0; i < StringGrid1->RowCount; i++)
			Table1->Add(StringGrid1->Rows[i]->DelimitedText);

	Table1->SaveToFile(SaveDialog1->FileName + ".txt");

	delete Table1;
}
//----------�������� ������� �� �����----------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
	/*----������� �������----*/
	if (student.size() != 0)
		for (int j = student.size(); j >= 0; j--)
			student.pop_back();

	TStringList *Table1 = new TStringList;

	if (OpenDialog1->Execute())
	{
		Table1->LoadFromFile(OpenDialog1->FileName);
		StringGrid1->RowCount = Table1->Count;

		for(int i = 0; i < StringGrid1->RowCount; i++)
			StringGrid1->Rows[i]->DelimitedText = Table1->Strings[i];

	delete Table1;

		/*������ � ������ ������ �������*/
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

		/*----������� StringGrid----*/
		for (int i = 1; i < StringGrid1->RowCount; i++)
			for (int j = 0; j < StringGrid1->ColCount; j++)
				StringGrid1->Cells[j][i] = "";

		/*----���������� �������----*/
		for (unsigned i = 0; i < student.size() - 1; i++)
		{
			int imin = i;
			for (unsigned j = i + 1; j < student.size(); j++ )
				if ( student[j].surname < student[imin].surname ) imin = j;
			TStudent a = student[i]; // ����� ���� ��������� ������� ��������
			student[i] = student[imin];
			student[imin] = a;
		}

		/*----������ ������� �������� � StringGrid----*/
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
//----------���������� ��������----------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if ((Edit1->Text != "") && (Edit2->Text != "") && (Edit3->Text != "") &&
	(Edit4->Text != "") &&
	(ComboBox2->Text == "�����") || (ComboBox2->Text == "�������") &&
	(ComboBox3->Text == "�����") || (ComboBox3->Text == "�������") &&
	(ComboBox4->Text == "�����") || (ComboBox4->Text == "�������") &&
	(ComboBox5->Text == "�����") || (ComboBox5->Text == "�������") &&
	(ComboBox6->Text == "�����") || (ComboBox6->Text == "�������") &&
	(ComboBox1->Text == "���������") || (ComboBox1->Text == "������������"))
	{
		studStruct.surname = Edit1->Text; studStruct.name = Edit2->Text;
		studStruct.otchestvo = Edit3->Text; studStruct.groupNumber = Edit4->Text;
		studStruct.offset[0] = ComboBox2->Text; studStruct.offset[1] = ComboBox3->Text;
		studStruct.offset[2] = ComboBox4->Text; studStruct.offset[3] = ComboBox5->Text;
		studStruct.offset[4] = ComboBox6->Text; studStruct.exam[0] = StrToInt(ComboBox7->Text);
		studStruct.exam[1] = StrToInt(ComboBox8->Text); studStruct.exam[2] = StrToInt(ComboBox9->Text);
		studStruct.defrayal = ComboBox1->Text;

		student.push_back(studStruct);

		/*----������� StringGrid----*/
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
			/*----���������� �������----*/
			for (unsigned i = 0; i < student.size() - 1; i++)
			{
				int imin = i;
				for (unsigned j = i + 1; j < student.size(); j++ )
					if ( student[j].surname < student[imin].surname ) imin = j;
				TStudent a = student[i]; // ����� ���� ��������� ������� ��������
				student[i] = student[imin];
				student[imin] = a;
			}

			/*----������ ������� �������� � StringGrid----*/
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

		Edit1->Text = ""; Edit2->Text = ""; Edit3->Text = ""; Edit4->Text = "";
		ComboBox1->Text = "��� ������"; ComboBox2->Text = StringGrid1->Cells[4][0];
		ComboBox3->Text = StringGrid1->Cells[5][0]; ComboBox4->Text = StringGrid1->Cells[6][0];
		ComboBox5->Text = StringGrid1->Cells[7][0]; ComboBox6->Text = StringGrid1->Cells[8][0];
		ComboBox7->Text = StringGrid1->Cells[9][0]; ComboBox8->Text = StringGrid1->Cells[10][0];
		ComboBox9->Text = StringGrid1->Cells[11][0];
	} else {
		ShowMessage("������� ���������� ������!");
	}
}
//----------������� ������ �������� ����� ������-----------------------------
void __fastcall TForm1::N10Click(TObject *Sender)
{
	Form7->ShowModal();
}
//----------�������� ��������� � �������-------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender)
{
	StringGrid1->Options = StringGrid1->Options << goEditing;
	ShowMessage("��������������� ������� ���������!");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N14Click(TObject *Sender)
{
	Form2->Show();
}
//---------------------------------------------------------------------------
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
//----------��������� ������ ��������� � �������-----------------------------
void __fastcall TForm1::N17Click(TObject *Sender)
{
	Form4->ShowModal();
}
//----------������� ��������-------------------------------------------------
void __fastcall TForm1::N13Click(TObject *Sender)
{
	Form8->ShowModal();
}
//---------------------------------------------------------------------------

