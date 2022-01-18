#include "Exit.h"
#include "ApplicationManager.h"
#include "GUI\Input.h"
#include "GUI\Output.h"
#include "SaveAction.h"

Exit::Exit(ApplicationManager* pApp) : Action(pApp)
{
	//this->Execute();
}

void Exit::ReadActionParameters()
{}

void Exit::Execute()
{
	
	GUI* pGUI = pManager->GetGUI();
	pGUI->ClearStatusBar();
	pGUI->PrintMessage("Sure? You want to save your graph befor exit? if yes then write Y or any key to exit");
	string s = pGUI->GetSrting();
	if (s == "Y" || s == "y")
	{
		ActionType newAct = SAVE;
		pManager->CreateAction(newAct);
	}
	else
	{
		pManager->set_LastMessage("We will miss you :(");
	}

}