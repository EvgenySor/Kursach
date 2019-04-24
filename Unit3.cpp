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
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//----------Заполнение фиксированых ячеек таблицы----------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
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

