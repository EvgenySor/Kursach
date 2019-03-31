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
	MessageDlg("Автор приложения студент группы ИСТ-11 Сорочук Евгений, БарГу", mtInformation, TMsgDlgButtons() << mbCancel  ,0);
}
//---------------------------------------------------------------------------
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
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	StringGrid1->Options = StringGrid1->Options << goEditing;
	ShowMessage("Корректирование таблицы разрешено!");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Form2->Show();
}
//---------------------------------------------------------------------------

