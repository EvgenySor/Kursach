//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//----------Сохранение в файл------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	if( SaveDialog1 ->Execute())
		Memo1->Lines->SaveToFile(SaveDialog1 ->FileName + ".txt");

	Form6->Close();
}
void __fastcall TForm6::FormCreate(TObject *Sender)
{
	Form6->Color = RGB(141, 185, 202);
}
//---------------------------------------------------------------------------

