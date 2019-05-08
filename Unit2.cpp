//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//----------���������� �������-----------------------------------------------
float data[3];
AnsiString Title = "������ �������� ����� ������";
//---------------------------------------------------------------------------
void __fastcall TForm2::FormResize(TObject *Sender)
{
	Form2->Refresh(); // �������� ���������� ����
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormPaint(TObject *Sender)
{
	data[0] = StrToFloat(Form9->Label2->Caption);
	data[1] = StrToFloat(Form9->Label3->Caption);
	data[2] = StrToFloat(Form9->Label4->Caption);

	int x, y;
	// ���������
	Canvas->Font->Name = "Tahoma";
	Canvas->Font->Size =12;

	x = (ClientWidth - Canvas->TextWidth(Title)) /2;

	Canvas->Brush->Style = bsClear;
	Canvas->TextOut(x,10,Title);

	// �����������
	int n; // ���������� ��������
	int wCol; // ������ �������

	#define MC 5 // ���������� ����� ���������� �� �����������
	n = sizeof(data) / sizeof(float);
	wCol = (ClientWidth - (n - 1)*MC - 20) / n;
	x = 10;
	y = ClientHeight - 20;

	// ����� ����������� � ������������ �������� ������
	int min,max; // ������ �����, � ������, �������

	min = 0 ; // ����� ������ ������� �����������
	max = 0 ; // ����� ������ ������� ������������

	for (int i = 1; i < n; i++)
	{
		if (data[i] < data[min]) min = i;
		if (data[i] > data[max]) max = i;
	}

	/* ���� ���������� �������� ���� �� �������� ��������
	��������������, �� ��������� ���������� �����������.
	� ���� ������ ����� ��������� �� ���������� ��������,
	� ���������� �� ������������ �������� ����. */

	bool frmin = true; // true - ����������� �� ������������
	int h; // ������ ��������
	// ������������� �������� �������������
	// ������� ������� ClientHeight - 90

	Canvas->Font->Size -= 2;

	for ( int i = 0; i < n; i++)
	{
		if (!frmin)
			h = (ClientHeight - 90) * data[i]/data[max];
		else
			/* ����������� �� ������������ ��������.
			����������� �������� ��������� ���������
			������� 10 �������� */
			h = (ClientHeight - 90) * (data[i] - data[min])/(data[max] - data[min]) + 10;

		Canvas->Brush->Style = bsSolid;
		Canvas->Brush->Color = clBlue;
		Canvas->Rectangle(x,y,x+wCol,y-h); // �������

		// ������� ������
		AnsiString st;
		st = FloatToStrF(data[i],ffGeneral,5,2);
		Canvas->Brush->Style = bsClear; // ������� ������
		// ������ - ����������

		Canvas->TextOut(x,y-h-20,st);
		x = x + wCol + MC;
	}
}
//---------------------------------------------------------------------------
