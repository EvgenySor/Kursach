//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
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
void __fastcall TForm1::Button7Click(TObject *Sender)
{
	Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button13Click(TObject *Sender)
{
	MessageDlg("����� ���������� ������� ������ ���-11 ������� �������, �����", mtInformation, TMsgDlgButtons() << mbCancel  ,0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[0][0] = "�������";
	StringGrid1->Cells[1][0] = "���";
	StringGrid1->Cells[2][0] = "��������";
	StringGrid1->Cells[3][0] = "� ������";
	StringGrid1->Cells[4][0] = "����� 1";
	StringGrid1->Cells[5][0] = "����� 2";
	StringGrid1->Cells[6][0] = "����� 3";
	StringGrid1->Cells[7][0] = "����� 4";
	StringGrid1->Cells[8][0] = "����� 5";
	StringGrid1->Cells[9][0] = "������� 1";
	StringGrid1->Cells[10][0] = "������� 2";
	StringGrid1->Cells[11][0] = "������� 3";
	StringGrid1->Cells[12][0] = "��� ������";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	StringGrid1->Options = StringGrid1->Options << goEditing;
	ShowMessage("��������������� ������� ���������!");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Form2->Show();
}
//---------------------------------------------------------------------------

