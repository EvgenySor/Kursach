//---------------------------------------------------------------------------

#ifndef CalcFunctionH
#define CalcFunctionH

#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
#endif
void calcAveragMark(int a, float *averageMarkExam, TStringGrid *S,
	UnicodeString *pay);

void calcAveragMark(float *averageMarkGroup, TStringGrid *S,
	TEdit *E);

float calcAveragMark(int a, TStringGrid *S, TEdit *E);
