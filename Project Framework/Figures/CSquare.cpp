#include "CSquare.h"

CSquare::CSquare(Point P1, int len, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	TopLeftCorner = P1;
	length = len;
}
	

void CSquare::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawRect to draw a Square on the screen	
	pGUI->DrawSquare(TopLeftCorner, length, FigGfxInfo, Selected);
	

}

void CSquare::Save(ofstream& OutFile)
{
	//OutFile << "Rectangle\t"
	//	<< ID << "\t" << this->Corner1.x << "\t" << this->Corner1.y << "\t"
	//	<< this->Corner2.x << "\t" << this->Corner2.y << "\t"
	//	<< this->getColor(this->FigGfxInfo.DrawClr) << "\t";
	//if (this->FigGfxInfo.isFilled)
	//	OutFile << this->getColor(this->FigGfxInfo.FillClr) << "\t";
	//else
	//	OutFile << "NON-FILLED\t";
	//OutFile << this->FigGfxInfo.Resize_Factor << "\n";
}