#pragma once
#include "Action.h"

class ChngFillClrAction : public Action {
	ActionType inputColorAction;
	color FillClr;
	//If a figure is selected
	bool IsSelectedFig;
	//If a color was picked in the color toolbar
	bool IsColor;
public:
	ChngFillClrAction(ApplicationManager *pApp);

	//Reads draw color parameters
	virtual void ReadActionParameters();

	//Changes current/selected figure draw color
	virtual void Execute();
};
