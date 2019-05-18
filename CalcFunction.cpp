//---------------------------------------------------------------------------

#pragma hdrstop

#include "CalcFunction.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

//----------Функция подсчета среднего балла----------------------------------
void calcAveragMark(int a, float *averageMarkExam, int *sortRowsCounter,
	TStringGrid *StringGrid1, UnicodeString *pay)
{
	int form1RowsCounter;
	form1RowsCounter = StrToInt(StringGrid1->RowCount);

	for (int i = 1; i < form1RowsCounter; i++)
		if(StringGrid1->Cells[12][i] == *pay)
		{
			*averageMarkExam += StrToFloat(StringGrid1->Cells[a][i]);
			(*sortRowsCounter)++;
		}
	*averageMarkExam /= *sortRowsCounter;
	*sortRowsCounter = 0;
}
//----------Функция подсчета среднего балла группы---------------------------
void calcAveragMark(float *averageMarkGroup, float *iterationCounter,
	TStringGrid *StringGrid1, TEdit *Edit1)
{
	for (int i = 0; i < StringGrid1->RowCount; i++)
		if (Edit1->Text == StringGrid1->Cells[3][i])
		{
			*averageMarkGroup += StrToFloat(StringGrid1->Cells[9][i]);
			*averageMarkGroup += StrToFloat(StringGrid1->Cells[10][i]);
			*averageMarkGroup += StrToFloat(StringGrid1->Cells[11][i]);
			*iterationCounter += 3;
		}
	*averageMarkGroup /= *iterationCounter;
}
