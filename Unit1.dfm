object DogForm: TDogForm
  Left = 0
  Top = 0
  Cursor = crHandPoint
  Caption = #1057#1086#1073#1072#1082#1077#1085#1099
  ClientHeight = 242
  ClientWidth = 472
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ListView1: TListView
    Left = 48
    Top = 32
    Width = 250
    Height = 150
    Columns = <>
    TabOrder = 0
  end
  object MainMenu1: TMainMenu
    Left = 352
    Top = 56
    object A1: TMenuItem
      Caption = 'File'
      object Open1: TMenuItem
        Caption = 'Open...'
      end
      object Save1: TMenuItem
        Caption = 'Save...'
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Caption = 'Exit'
        OnClick = Exit1Click
      end
    end
  end
end
