// ***** BEGIN LICENSE BLOCK *****
// * Version: MPL 1.1
// *
// * The contents of this file are subject to the Mozilla Public License Version
// * 1.1 (the "License"); you may not use this file except in compliance with
// * the License. You may obtain a copy of the License at
// * http://www.mozilla.org/MPL/
// *
// * Software distributed under the License is distributed on an "AS IS" basis,
// * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
// * for the specific language governing rights and limitations under the
// * License.
// *
// * The Original Code is TurboPower ShellShock
// *
// * The Initial Developer of the Original Code is
// * TurboPower Software
// *
// * Portions created by the Initial Developer are Copyright (C) 1996-2002
// * the Initial Developer. All Rights Reserved.
// *
// * Contributor(s):
// *
// * ***** END LICENSE BLOCK *****
//---------------------------------------------------------------------------
#ifndef ExShEnum1UH
#define ExShEnum1UH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "StShlCtl.hpp"
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include "SsBase.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
  TLabel *Label2;
  TLabel *Label1;
  TRadioGroup *OptionsRg;
  TListBox *ResultsLb;
  TCheckBox *SortDirCb;
  TStShellTreeView *StShellTreeView1;
  TMemo *Memo1;
  TStShellEnumerator *StShellEnumerator1;
  void __fastcall FormCreate(TObject *Sender);
  void __fastcall ResultsLbDrawItem(TWinControl *Control, int Index,
          TRect &Rect, TOwnerDrawState State);
  void __fastcall SortDirCbClick(TObject *Sender);
  void __fastcall StShellTreeView1FolderSelected(TObject *Sender,
          TStShellFolder *Folder);
private:	// User declarations
  void AddItems();
public:		// User declarations
  __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
