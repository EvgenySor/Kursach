object Form6: TForm6
  Left = 0
  Top = 0
  Caption = #1057#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083
  ClientHeight = 161
  ClientWidth = 245
  Color = clSilver
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 225
    Height = 97
    Lines.Strings = (
      '')
    TabOrder = 0
  end
  object Button1: TButton
    Left = 45
    Top = 121
    Width = 169
    Height = 32
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1074' '#1092#1072#1081#1083
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
  object SaveDialog1: TSaveDialog
    Left = 136
    Top = 48
  end
end
