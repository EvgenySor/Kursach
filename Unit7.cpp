//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit1.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//----------Подсчет среднего балла группы------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
	Form6->Memo1->Clear();

	float averageMarkGroup = 0, iterationCounter = 0;

	for (int i = 0; i < Form1->StringGrid1->RowCount; i++)
		if (Edit1->Text == Form1->StringGrid1->Cells[3][i])
		{
			averageMarkGroup += StrToFloat(Form1->StringGrid1->Cells[9][i]);
			averageMarkGroup += StrToFloat(Form1->StringGrid1->Cells[10][i]);
			averageMarkGroup += StrToFloat(Form1->StringGrid1->Cells[11][i]);
			iterationCounter +=3;
		}
	averageMarkGroup /= iterationCounter;

	Form6->Memo1->Lines->Add("Общий средний балл группы " + Edit1->Text + ": " +
							FloatToStrF(averageMarkGroup,ffFixed,3,2));

	Form6->Show(); Form7->Close();
}
void __fastcall TForm7::FormCreate(TObject *Sender)
{
	Form7->Color = RGB(141, 185, 202);
}
//---------------------------------------------------------------------------

