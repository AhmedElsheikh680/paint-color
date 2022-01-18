#ifndef APPLICATION_MANAGER_H
#define APPLICATION_MANAGER_H

#include "DEFS.h"
#include "Figures\CFigure.h"
#include "GUI\Output.h"
#include "GUI\Input.h"
#include "GUI\UI_Info.h"

class Action;	//Forward Declaration


//Main class that manages everything in the application.
class ApplicationManager
{
	enum { MaxFigCount = 200 };	//Max no of figures

private:
	int FigCount;		//Actual number of figures
	CFigure* FigList[MaxFigCount];	//List of all figures (Array of pointers)

	//Pointers to Input and Output classes
	GUI* pGUI;
	
	//Pointers to Input and Output classes
	Input* pIn;
	Output* pOut;

	CFigure* SelectedFig; //Pointer to the selected figure

	string LastMessage;


public:	
	ApplicationManager(); 
	~ApplicationManager();

	void Run();		//to run the application
	
	// -- Action-Related Functions
	Action* CreateAction(ActionType);
	void ExecuteAction(Action*&) ; //Execute an action
	
	// -- Figures Management Functions
	void AddFigure(CFigure* pFig); //Adds a new figure to the FigList
	CFigure *GetFigure(int x, int y) const; //Search for a figure given a point inside the figure
		
	// -- Interface Management Functions	
	GUI *GetGUI() const; //Return pointer to the interface

	// -- Interface Management Functions
	Input* GetInput() const; //Return pointer to the input
	Output* GetOutput() const; //Return pointer to the output

	void UpdateInterface() const;	//Redraws all the drawing window	

	string ConvertToString(color c);   //Convert from Color Type to String Type

	void set_selected(CFigure* fig);

	void Unselect(CFigure* fig);

	void SaveFig(ofstream& Out);  //function to call Save Function for each figure

	void set_LastMessage(string s);
	

};

#endif