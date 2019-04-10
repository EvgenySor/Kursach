object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1043#1083#1072#1074#1085#1099#1081' '#1101#1082#1088#1072#1085
  ClientHeight = 301
  ClientWidth = 901
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    Left = 0
    Top = 0
    Width = 897
    Height = 297
    ColCount = 13
    DefaultColWidth = 80
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    TabOrder = 0
  end
  object SaveDialog1: TSaveDialog
    Left = 472
    Top = 208
  end
  object OpenDialog1: TOpenDialog
    Title = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1099#1081' '#1092#1072#1081#1083
    Left = 400
    Top = 208
  end
  object MainMenu1: TMainMenu
    Left = 536
    Top = 200
    object N1: TMenuItem
      Caption = #1053#1086#1074#1072#1103' '#1090#1072#1073#1083#1080#1094#1072
      OnClick = N1Click
    end
    object N2: TMenuItem
      Caption = #1054#1090#1082#1088#1099#1090#1100
    end
    object N3: TMenuItem
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    end
    object N4: TMenuItem
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1089#1090#1091#1076#1077#1085#1090#1072
      OnClick = N4Click
    end
    object N5: TMenuItem
      Caption = #1050#1086#1088#1088#1077#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1090#1072#1073#1083#1080#1094#1091
      OnClick = N5Click
    end
    object N6: TMenuItem
      Caption = #1055#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1100#1089#1082#1080#1077' '#1079#1072#1087#1088#1086#1089#1099
      object N7: TMenuItem
        Caption = #1042#1099#1074#1077#1089#1090#1080' '#1089#1087#1080#1089#1086#1082' '#1089#1090#1091#1076#1077#1085#1090#1086#1074' '#1087#1086' '#1085#1086#1084#1077#1088#1091' '#1075#1088#1091#1087#1087#1099
        OnClick = N7Click
      end
      object N8: TMenuItem
        Caption = #1057#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083' '#1089#1090#1091#1076#1077#1085#1090#1086#1074'('#1075#1086#1089#1073#1102#1076#1078#1077#1090')'
        OnClick = N8Click
      end
      object N9: TMenuItem
        Caption = #1057#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083' '#1089#1090#1091#1076#1077#1085#1090#1086#1074'('#1082#1086#1084#1084#1077#1088#1095#1077#1089#1082')'
      end
      object N10: TMenuItem
        Caption = #1054#1073#1097#1080#1081' '#1089#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083
      end
    end
    object N11: TMenuItem
      Caption = #1040#1074#1090#1086#1088
      OnClick = N11Click
    end
    object N12: TMenuItem
      Caption = #1050#1072#1082' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1100#1089#1103
    end
  end
end
