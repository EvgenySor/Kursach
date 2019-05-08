//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//----------Удаление студента------------------------------------------------
void __fastcall TForm8::BitBtn1Click(TObject *Sender)
{
	if ((Edit1->Text != "") && (Edit2->Text != "") && (Edit3->Text != ""))
	{
		LdelSurname->Caption = Edit1->Text;
		LdelName->Caption = Edit2->Text;
		LdelGroupNumber->Caption = Edit3->Text;

		int *index = new int;
		int *temp = new int; *temp = -1;

		for (int i = 1; i < Form1->StringGrid1->RowCount; i++)
		{
			if (LdelSurname->Caption == Form1->StringGrid1->Cells[0][i] &&
			LdelName->Caption == Form1->StringGrid1->Cells[1][i] &&
			LdelGroupNumber->Caption == Form1->StringGrid1->Cells[3][i])
			{
				*index = i;
				Form1->StringGrid1->Rows[i]->Clear();
				(*temp)++;
				break;
			}
		}

		/*----------"Стягиваем" строку на предыдущую----------*/
		if (*temp != -1)
		{
			for (int i = *index; i < Form1->StringGrid1->RowCount - 1; i++)
				Form1->StringGrid1->Rows[i] = Form1->StringGrid1->Rows[i+1];

			Form1->StringGrid1->RowCount--;
		}

		delete index; delete temp;
	} else {
        ShowMessage("Заполните все поля!");
    }

}
//---------------------------------------------------------------------------
