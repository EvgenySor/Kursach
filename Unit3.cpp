//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Unit5.h"
#include "TableFunction.h"
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
	fillTheTable(StringGrid1);
}

void __fastcall TForm3::StringGrid1DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State)
{
	int x, y;
	x = Rect.Left + (Rect.Width() - StringGrid1->Canvas->TextWidth(StringGrid1->Cells[ACol][ARow]))/2;
	y = Rect.Top + (Rect.Height() - StringGrid1->Canvas->TextHeight(StringGrid1->Cells[ACol][ARow]))/2;
	if(ACol > -1 && ARow == 0)
	{
		StringGrid1->Canvas->Brush->Color = RGB(255, 108, 95);
		StringGrid1->Canvas->Pen->Color = RGB(238, 203, 173);
		StringGrid1->Canvas->Rectangle(Rect);
		StringGrid1->Canvas->TextOut(x,y,StringGrid1->Cells[ACol][ARow]);
	}
	if (ACol > -1 && ARow != 0)
	{
		StringGrid1->Canvas->Brush->Color = RGB(255, 193, 104);
		StringGrid1->Canvas->Pen->Color = RGB(238, 203, 173);
		StringGrid1->Canvas->Rectangle(Rect);
		StringGrid1->Canvas->TextOut(x,y,StringGrid1->Cells[ACol][ARow]);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
	StringGrid1->RowCount = 1;
}
//---------------------------------------------------------------------------

