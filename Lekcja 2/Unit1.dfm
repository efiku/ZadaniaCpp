object Form1: TForm1
  Left = 629
  Top = 214
  Width = 277
  Height = 182
  Caption = 'Krzysztof Pazdur'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 16
    Width = 76
    Height = 13
    Caption = 'Pierwsza Liczba'
  end
  object Label2: TLabel
    Left = 24
    Top = 48
    Width = 63
    Height = 13
    Caption = 'Druga Liczba'
  end
  object Label3: TLabel
    Left = 24
    Top = 80
    Width = 37
    Height = 16
    Caption = 'Wynik'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Liczba1: TEdit
    Left = 112
    Top = 16
    Width = 121
    Height = 21
    TabOrder = 0
    Text = '0'
  end
  object Liczba2: TEdit
    Left = 112
    Top = 48
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '0'
  end
  object wynik: TEdit
    Left = 112
    Top = 80
    Width = 121
    Height = 21
    TabOrder = 2
    Text = '0'
  end
  object Button1: TButton
    Left = 8
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Suma '
    TabOrder = 3
    OnClick = Button1Click
  end
  object roznic: TButton
    Left = 96
    Top = 112
    Width = 75
    Height = 25
    Caption = 'R'#243#380'nica'
    TabOrder = 4
    OnClick = Button1Click
  end
  object iloraz: TButton
    Left = 176
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Iloraz'
    TabOrder = 5
    OnClick = Button1Click
  end
end
