�
 TMAINFORM 0�  TPF0	TMainFormMainFormLeft� ToplWidthHeight�CaptionDrop Files Example ProgramFont.CharsetDEFAULT_CHARSET
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style OnCreate
FormCreatePixelsPerInch`
TextHeight TLabelLabel1Left� TopWidthHeightCaptionMemo  TLabelLabel2Left� Top� Width%HeightCaptionList Box  TLabelLabel3LeftTop� Width� HeightCaptionTarget String List (Memo.Lines)  TMemoMemoLeft� Top WidthIHeight� Lines.StringsMemo TabOrder   	TCheckBoxActiveCBLeftTopWidthqHeightCaptionDrop Files ActiveState	cbCheckedTabOrderOnClickActiveCBClick  TListBoxListBoxLeft� Top� WidthIHeight� 
ItemHeightTabOrder  TRadioGroupTargetRGLeftTop8Width� Height� Caption Drop Target 	ItemIndex Items.Strings	Main FormMemoList Box TabOrderOnClickTargetRGClick  TMemoTargetSLMemoLeftTop� Width� Height� Lines.StringsThis memo will automatically received dropped files becausethe memo's Lines property isassigned to the StDropFilescomponent's TargetStringList	property. TabOrderWordWrap  TStDropFilesStDropFiles1
DropTargetOwnerOnDropFilesStDropFiles1DropFilesLeft� Top   