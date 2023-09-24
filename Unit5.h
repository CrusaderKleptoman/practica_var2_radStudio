//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TLabel *LabelX;
	TButton *ButtonEnterCoordinate;
	TEdit *EditX;
	TLabel *LabelY;
	TEdit *EditY;
	TPaintBox *PaintBox1;
	TButton *ButtonClear;
	TButton *ButtonLogic;
	TLabel *Label1;
	TLabel *Label2;
	TStaticText *StaticTextPoint1X;
	TStaticText *StaticTextPoint1Y;
	TStaticText *StaticText3;
	TStaticText *StaticText4;
	TStaticText *StaticText5;
	TStaticText *StaticTextPoint2X;
	TStaticText *StaticTextPoint2Y;
	TStaticText *StaticTextPoint3X;
	TStaticText *StaticTextPoint3Y;
	TStaticText *StaticText1;
	TStaticText *StaticText2;
	TStaticText *StaticText6;
	TStaticText *StaticTextSCircle;
	TStaticText *StaticTextSTriangle;
	TStaticText *StaticTextSDifference;
	TButton *ButtonTask;
	void __fastcall ButtonEnterCoordinateClick(TObject *Sender);
	void __fastcall ButtonClearClick(TObject *Sender);
	void __fastcall ButtonLogicClick(TObject *Sender);
	void __fastcall ButtonTaskClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
