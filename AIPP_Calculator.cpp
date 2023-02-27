//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AIPP_Calculator.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
int option;
double a,b,c,total;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::no1Click(TObject *Sender)
{
	if (terminal->Text.Length()==12){
		return;
	}
	if (terminal->Text == "0"){
		terminal->Text = ((TButton*) Sender)-> Text;
	}
	else{
		terminal->Text = terminal->Text + ((TButton*) Sender)-> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::no2Click(TObject *Sender)
{
	if (terminal->Text.Length()==12){
		return;
	}
	if (terminal->Text == "0"){
		terminal->Text = ((TButton*) Sender)-> Text;
	}
	else{
		terminal->Text = terminal->Text + ((TButton*) Sender)-> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::no3Click(TObject *Sender)
{
    if (terminal->Text.Length()==12){
		return;
	}
	if (terminal->Text == "0"){
		terminal->Text = ((TButton*) Sender)-> Text;
	}
	else{
		terminal->Text = terminal->Text + ((TButton*) Sender)-> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::no4Click(TObject *Sender)
{
	if (terminal->Text.Length()==12){
		return;
	}
	if (terminal->Text == "0"){
		terminal->Text = ((TButton*) Sender)-> Text;
	}
	else{
		terminal->Text = terminal->Text + ((TButton*) Sender)-> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::no5Click(TObject *Sender)
{
	if (terminal->Text.Length()==12){
		return;
	}
	if (terminal->Text == "0"){
		terminal->Text = ((TButton*) Sender)-> Text;
	}
	else{
		terminal->Text = terminal->Text + ((TButton*) Sender)-> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::no6Click(TObject *Sender)
{
	if (terminal->Text.Length()==12){
		return;
	}
	if (terminal->Text == "0"){
		terminal->Text = ((TButton*) Sender)-> Text;
	}
	else{
		terminal->Text = terminal->Text + ((TButton*) Sender)-> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::no7Click(TObject *Sender)
{
	if (terminal->Text.Length()==12){
		return;
	}
	if (terminal->Text == "0"){
		terminal->Text = ((TButton*) Sender)-> Text;
	}
	else{
		terminal->Text = terminal->Text + ((TButton*) Sender)-> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::no8Click(TObject *Sender)
{
	if (terminal->Text.Length()==12){
		return;
	}
	if (terminal->Text == "0"){
		terminal->Text = ((TButton*) Sender)-> Text;
	}
	else{
		terminal->Text = terminal->Text + ((TButton*) Sender)-> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::no9Click(TObject *Sender)
{
	if (terminal->Text.Length()==12){
		return;
	}
	if (terminal->Text == "0"){
		terminal->Text = ((TButton*) Sender)-> Text;
	}
	else{
		terminal->Text = terminal->Text + ((TButton*) Sender)-> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CalculateClick(TObject *Sender)
{
	b = terminal->Text.ToDouble();
	switch(option){
		case 1:
		total =  a - b;
		break;
		case 2:
		total =  a + b;
		break;
		case 3:
		total = a * b;
		break;
		case 4:
		total = a / b;
		break;
	}
	terminal->Text = total;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClearClick(TObject *Sender)
{
	terminal->Text = "0";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MinusClick(TObject *Sender)
{
	option = 1;
	a = terminal->Text.ToDouble();
	terminal->Text = " ";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PlusClick(TObject *Sender)
{
	option = 2;
	a = terminal->Text.ToDouble();
	terminal->Text = " ";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::MultiClick(TObject *Sender)
{
	option = 3;
	a = terminal->Text.ToDouble();
	terminal->Text = " ";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DivClick(TObject *Sender)
{
	option = 4;
	a = terminal->Text.ToDouble();
	terminal->Text = " ";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DelClick(TObject *Sender)
{
	int del = terminal->Text.Length();
	if (del == 1){
		terminal->Text = "0";
	}
	else{
		String display = terminal->Text.Delete(del,1);
		terminal->Text = display;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
	if(!terminal->Text.Pos(",")){
		terminal->Text = terminal->Text + ",";
	}
}
//---------------------------------------------------------------------------



