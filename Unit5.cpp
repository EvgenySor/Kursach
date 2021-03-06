//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
#include "CalcFunction.h"
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
	try
	{
		float averageMarkGroup = 0;

		calcAveragMark(&averageMarkGroup, Form1->StringGrid1, Edit1);

		Form6->Memo1->Lines->Add("����� ������� ���� ������ " + Edit1->Text + ": " +
			FloatToStrF(averageMarkGroup,ffFixed,3,2));

		Form6->Show(); Close();
	}
	catch(...)
	{
		ShowMessage("������, ������� ������������ ������!");
	}
}
//----------������� �������� ����� ��������� ��������� ������----------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
	Label2->Caption = FloatToStr(calcAveragMark(9, Form1->StringGrid1, Edit1));
	Label3->Caption = FloatToStr(calcAveragMark(10, Form1->StringGrid1, Edit1));
	Label4->Caption = FloatToStr(calcAveragMark(11, Form1->StringGrid1, Edit1));

	Form2->Show(); Close();
}

