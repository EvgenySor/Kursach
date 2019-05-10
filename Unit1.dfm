object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1043#1083#1072#1074#1085#1099#1081' '#1101#1082#1088#1072#1085
  ClientHeight = 568
  ClientWidth = 917
  Color = clSilver
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
    Left = 8
    Top = 271
    Width = 897
    Height = 243
    ColCount = 13
    DefaultColWidth = 120
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    TabOrder = 0
    OnDrawCell = StringGrid1DrawCell
  end
  object GroupBox1: TGroupBox
    Left = 175
    Top = 8
    Width = 583
    Height = 256
    Caption = #1051#1080#1095#1085#1099#1077' '#1076#1072#1085#1085#1099#1077
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    object Label1: TLabel
      Left = 16
      Top = 32
      Width = 63
      Height = 19
      Caption = #1060#1072#1084#1080#1083#1080#1103
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 16
      Top = 78
      Width = 28
      Height = 19
      Caption = #1048#1084#1103
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 15
      Top = 120
      Width = 64
      Height = 19
      Caption = #1054#1090#1095#1077#1089#1090#1074#1086
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 15
      Top = 166
      Width = 69
      Height = 19
      Caption = #8470' '#1075#1088#1091#1087#1087#1099
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 97
      Top = 29
      Width = 121
      Height = 29
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 97
      Top = 74
      Width = 121
      Height = 29
      TabOrder = 1
    end
    object Edit3: TEdit
      Left = 97
      Top = 117
      Width = 121
      Height = 29
      TabOrder = 2
    end
    object Edit4: TEdit
      Left = 97
      Top = 163
      Width = 121
      Height = 29
      TabOrder = 3
    end
    object ComboBox1: TComboBox
      Left = 16
      Top = 212
      Width = 202
      Height = 27
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      Text = #1042#1080#1076' '#1086#1087#1083#1072#1090#1099
      Items.Strings = (
        #1043#1086#1089#1073#1102#1076#1078#1077#1090
        #1050#1086#1084#1084#1077#1088#1095#1077#1089#1082#1072#1103)
    end
    object ComboBox2: TComboBox
      Left = 249
      Top = 29
      Width = 144
      Height = 27
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 5
      Text = #1047#1072#1095#1077#1090' 1'
      Items.Strings = (
        #1047#1072#1095#1077#1090
        #1053#1077#1079#1072#1095#1077#1090)
    end
    object ComboBox3: TComboBox
      Left = 249
      Top = 75
      Width = 144
      Height = 27
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 6
      Text = #1047#1072#1095#1077#1090' 2'
      Items.Strings = (
        #1047#1072#1095#1077#1090
        #1053#1077#1079#1072#1095#1077#1090)
    end
    object ComboBox4: TComboBox
      Left = 249
      Top = 117
      Width = 144
      Height = 27
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 7
      Text = #1047#1072#1095#1077#1090' 3'
      Items.Strings = (
        #1047#1072#1095#1077#1090
        #1053#1077#1079#1072#1095#1077#1090)
    end
    object ComboBox5: TComboBox
      Left = 249
      Top = 163
      Width = 144
      Height = 27
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 8
      Text = #1047#1072#1095#1077#1090' 4'
      Items.Strings = (
        #1047#1072#1095#1077#1090
        #1053#1077#1079#1072#1095#1077#1090)
    end
    object ComboBox6: TComboBox
      Left = 249
      Top = 203
      Width = 144
      Height = 27
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ItemIndex = 0
      ParentFont = False
      TabOrder = 9
      Text = #1047#1072#1095#1077#1090
      Items.Strings = (
        #1047#1072#1095#1077#1090
        #1053#1077#1079#1072#1095#1077#1090)
    end
    object ComboBox7: TComboBox
      Left = 424
      Top = 29
      Width = 145
      Height = 27
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 10
      Text = #1069#1082#1079#1072#1084#1077#1085' 1'
      Items.Strings = (
        '1'
        '2'
        '3'
        '4'
        '5'
        '6'
        '7'
        '8'
        '9'
        '10')
    end
    object ComboBox8: TComboBox
      Left = 424
      Top = 75
      Width = 145
      Height = 27
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 11
      Text = #1069#1082#1079#1072#1084#1077#1085' 2'
      Items.Strings = (
        '1'
        '2'
        '3'
        '4'
        '5'
        '6'
        '7'
        '8'
        '9'
        '10')
    end
    object ComboBox9: TComboBox
      Left = 424
      Top = 117
      Width = 145
      Height = 27
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 12
      Text = #1069#1082#1079#1072#1084#1077#1085' 3'
      Items.Strings = (
        '1'
        '2'
        '3'
        '4'
        '5'
        '6'
        '7'
        '8'
        '9'
        '10')
    end
    object Button1: TButton
      Left = 424
      Top = 157
      Width = 145
      Height = 39
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 13
      OnClick = Button1Click
    end
  end
  object Button2: TButton
    Left = 343
    Top = 524
    Width = 225
    Height = 36
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1082#1086#1088#1088#1077#1082#1090#1080#1088#1086#1074#1082#1091
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    Visible = False
    OnClick = Button2Click
  end
  object SaveDialog1: TSaveDialog
    Filter = #1060#1072#1081#1083#1099' '#1076#1072#1085#1085#1099#1093'|*.txt|'#1042#1089#1077' '#1092#1072#1081#1083#1099'|*.*'
    Left = 32
    Top = 96
  end
  object OpenDialog1: TOpenDialog
    Filter = #1060#1072#1081#1083#1099' '#1076#1072#1085#1085#1099#1093'|*.txt|'#1042#1089#1077' '#1092#1072#1081#1083#1099'|*.*'
    Title = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1099#1081' '#1092#1072#1081#1083
    Left = 32
    Top = 32
  end
  object MainMenu1: TMainMenu
    Left = 32
    Top = 160
    object N15: TMenuItem
      Caption = #1058#1072#1073#1083#1080#1094#1072
      object N16: TMenuItem
        Caption = #1053#1086#1074#1072#1103' '#1090#1072#1073#1083#1080#1094#1072
        OnClick = N16Click
      end
      object N17: TMenuItem
        Caption = #1047#1072#1087#1086#1083#1085#1080#1090#1100' '#1087#1086#1083#1103' '#1101#1082#1079#1072#1084#1077#1085#1086#1074' '#1080' '#1079#1072#1095#1077#1090#1086#1074
        OnClick = N17Click
      end
      object N2: TMenuItem
        Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1079#1085#1072#1095#1077#1085#1080#1103' '#1087#1086#1083#1077#1081
        OnClick = N2Click
      end
      object N3: TMenuItem
        Caption = #1059#1076#1072#1083#1080#1090#1100' '#1089#1090#1091#1076#1077#1085#1090#1072
        OnClick = N3Click
      end
    end
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N18: TMenuItem
        Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1090#1072#1073#1083#1080#1094#1091' '#1074' '#1092#1072#1081#1083
        OnClick = N18Click
      end
      object N19: TMenuItem
        Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1076#1072#1085#1085#1099#1077' '#1080#1079' '#1092#1072#1081#1083#1072
        OnClick = N19Click
      end
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
        OnClick = N9Click
      end
      object N10: TMenuItem
        Caption = #1054#1073#1097#1080#1081' '#1089#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083' '#1075#1088#1091#1087#1087#1099
        OnClick = N10Click
      end
      object N14: TMenuItem
        Caption = #1055#1086#1089#1090#1088#1086#1080#1090#1100' '#1075#1088#1072#1092#1080#1082' '#1089#1088#1077#1076#1085#1077#1075#1086' '#1073#1072#1083#1083#1072' '#1075#1088#1091#1087#1087#1099
        OnClick = N14Click
      end
    end
    object N11: TMenuItem
      Caption = #1040#1074#1090#1086#1088
      OnClick = N11Click
    end
    object N12: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      OnClick = N12Click
    end
  end
end
