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
		/*----------Создание динамических Label*/
		for (int i = 0; i < 3; i++)
		{
			L[i] = new TLabel(this);
			L[i]->Parent = this;
			L[i]->Top = 5 * i; L[i]->Left = 5 * i;
			L[i]->Visible = false;
		}

		L[0]->Caption = Edit1->Text;
		L[1]->Caption = Edit2->Text;
		L[2]->Caption = Edit3->Text;

		int *index = new int;

		for (int i = 1; i < Form1->StringGrid1->RowCount; i++)
		{
			if (L[0]->Caption == Form1->StringGrid1->Cells[0][i] &&
			L[1]->Caption == Form1->StringGrid1->Cells[1][i] &&
			L[2]->Caption == Form1->StringGrid1->Cells[3][i])
			{
				*index = i;
				Form1->StringGrid1->Rows[i]->Clear();
				break;
			}
		}

		/*----------"Стягиваем" строку на предыдущую----------*/
		for (int i = *index; i < Form1->StringGrid1->RowCount; i++)
			Form1->StringGrid1->Rows[i] = Form1->StringGrid1->Rows[i+1];

		Form1->StringGrid1->RowCount--;

		delete index;

		for (int i = 0; i < 3; i++)
			delete L[i];

	} else {
		ShowMessage("Заполните все поля!");
	}

}
//---------------------------------------------------------------------------
