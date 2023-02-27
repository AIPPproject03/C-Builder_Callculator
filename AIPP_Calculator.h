//---------------------------------------------------------------------------

#ifndef AIPP_CalculatorH
#define AIPP_CalculatorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Ani.hpp>
#include <FMX.ImgList.hpp>
#include <System.ImageList.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *terminal;
	TSpeedButton *SpeedButton1;
	TSpeedButton *Del;
	TSpeedButton *no7;
	TSpeedButton *no4;
	TSpeedButton *no1;
	TSpeedButton *Plus;
	TSpeedButton *Minus;
	TSpeedButton *Calculate;
	TSpeedButton *SpeedButton9;
	TSpeedButton *Div;
	TSpeedButton *Multi;
	TSpeedButton *Clear;
	TSpeedButton *no8;
	TSpeedButton *no6;
	TSpeedButton *no5;
	TSpeedButton *no2;
	TSpeedButton *no9;
	TSpeedButton *no3;
	TImage *Image1;
	TColorAnimation *ColorAnimation1;
	TLabel *Label2;
	TColorAnimation *ColorAnimation2;
	void __fastcall no1Click(TObject *Sender);
	void __fastcall no2Click(TObject *Sender);
	void __fastcall no3Click(TObject *Sender);
	void __fastcall no4Click(TObject *Sender);
	void __fastcall no5Click(TObject *Sender);
	void __fastcall no6Click(TObject *Sender);
	void __fastcall no7Click(TObject *Sender);
	void __fastcall no8Click(TObject *Sender);
	void __fastcall no9Click(TObject *Sender);
	void __fastcall PlusClick(TObject *Sender);
	void __fastcall CalculateClick(TObject *Sender);
	void __fastcall ClearClick(TObject *Sender);
	void __fastcall MinusClick(TObject *Sender);
	void __fastcall MultiClick(TObject *Sender);
	void __fastcall DivClick(TObject *Sender);
	void __fastcall DelClick(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
