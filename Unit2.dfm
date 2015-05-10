object dogeAdd: TdogeAdd
  Left = 0
  Top = 0
  Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1087#1086#1088#1086#1076#1099
  ClientHeight = 416
  ClientWidth = 472
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object WeightLabel: TLabel
    Left = 31
    Top = 144
    Width = 21
    Height = 13
    Caption = #1042#1077#1089':'
  end
  object LifeLabel: TLabel
    Left = 31
    Top = 70
    Width = 143
    Height = 13
    Caption = #1055#1088#1086#1076#1086#1083#1078#1080#1090#1077#1083#1100#1085#1086#1089#1090#1100' '#1078#1080#1079#1085#1080':'
  end
  object TallLabel: TLabel
    Left = 31
    Top = 112
    Width = 77
    Height = 13
    Caption = #1056#1086#1089#1090' ('#1074' '#1093#1086#1083#1082#1077'):'
  end
  object QualityLabel: TLabel
    Left = 31
    Top = 176
    Width = 52
    Height = 13
    Caption = #1050#1072#1095#1077#1089#1090#1074#1072':'
  end
  object BreedLabel: TLabel
    Left = 31
    Top = 40
    Width = 42
    Height = 13
    Caption = #1055#1086#1088#1086#1076#1072':'
  end
  object AboutLabel: TLabel
    Left = 31
    Top = 208
    Width = 93
    Height = 13
    Caption = #1050#1088#1072#1090#1082#1086#1077' '#1086#1087#1080#1089#1072#1085#1080#1077
  end
  object DogSmallImage: TImage
    Left = 359
    Top = 8
    Width = 99
    Height = 99
  end
  object BreedComboBox: TComboBox
    Left = 31
    Top = 8
    Width = 139
    Height = 21
    TabOrder = 0
    Text = #1055#1088#1077#1076#1085#1072#1079#1085#1072#1095#1077#1085#1080#1077
    Items.Strings = (
      #1041#1086#1081#1094#1086#1074#1072#1103
      #1044#1077#1082#1086#1088#1072#1090#1080#1074#1085#1072#1103
      #1057#1083#1091#1078#1077#1073#1085#1072#1103)
  end
  object BreedEdit: TEdit
    Left = 232
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object LifeEdit: TEdit
    Left = 232
    Top = 67
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object TallEdit: TEdit
    Left = 232
    Top = 104
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object WeightEdit: TEdit
    Left = 232
    Top = 136
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object QualityEdit: TEdit
    Left = 232
    Top = 168
    Width = 121
    Height = 21
    TabOrder = 5
  end
  object AboutMemo: TMemo
    Left = 31
    Top = 240
    Width = 266
    Height = 161
    TabOrder = 6
  end
  object AddButton: TButton
    Left = 335
    Top = 304
    Width = 123
    Height = 97
    Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1087#1086#1088#1086#1076#1099
    TabOrder = 7
    OnClick = AddButtonClick
  end
  object ImageButton: TButton
    Left = 335
    Top = 238
    Width = 123
    Height = 25
    Caption = #1042#1099#1073#1086#1088' '#1080#1079#1086#1073#1088#1072#1078#1077#1085#1080#1103
    TabOrder = 8
    OnClick = ImageButtonClick
  end
end
