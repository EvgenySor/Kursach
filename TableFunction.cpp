//---------------------------------------------------------------------------

#pragma hdrstop

#include "TableFunction.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void fillTheTable(TStringGrid *StringGrid)
{
	StringGrid->Cells[0][0] = "Фамилия";
	StringGrid->Cells[1][0] = "Имя";
	StringGrid->Cells[2][0] = "Отчество";
	StringGrid->Cells[3][0] = "№ группы";
	StringGrid->Cells[4][0] = "Зачет 1";
	StringGrid->Cells[5][0] = "Зачет 2";
	StringGrid->Cells[6][0] = "Зачет 3";
	StringGrid->Cells[7][0] = "Зачет 4";
	StringGrid->Cells[8][0] = "Зачет 5";
	StringGrid->Cells[9][0] = "Экзамен 1";
	StringGrid->Cells[10][0] = "Экзамен 2";
	StringGrid->Cells[11][0] = "Экзамен 3";
	StringGrid->Cells[12][0] = "Вид оплаты";
}
