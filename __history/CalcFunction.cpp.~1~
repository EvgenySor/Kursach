//---------------------------------------------------------------------------

#pragma hdrstop

#include "CalcFunction.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

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