#ifndef DEFS_H
#define DEFS_H

#include "CMUgraphicsLib\CMUgraphics.h"

//This file contains some global constants and definitions to be used in the project.
enum ActionType //The actions supported (you can add more if needed)
{
	DRAW_RECT,		//Draw Rectangle
	DRAW_SQUARE,
	DRAW_TRI,
	DRAW_HEX,
	DRAW_CIRCLE,
	SELECT,
	DRW_CLR,
	FILL_CLR,
	BLK,
	YEL,
	ORG,
	GRN,
	RD,
	BLU,
	DEL,
	MOVE,
	UNDO,
	REDO,
	CLEAR,
	REC,
	REC_STOP,
	REC_PLAY,
	SAVE,
	LOAD,
	TO_PLAY,		//Switch interface to Play mode

	PICK_FIG_TYPE,
	PICK_FIG_FILL,
	PICK_FIG_TYPE_FILL,
	TO_DRAW,		//Switch interface to Draw mode		

	EXIT,			//Exit
	EMPTY,			//A click on empty place in the toolbar
	DRAWING_AREA,	//A click on the drawing area
	STATUS			//A click on the status bar

	///TODO: Add the other action types of the two modes
};

struct Point	//To be used for figures points
{ int x,y; };

struct GfxInfo	//Graphical info of each figure (you may add more members)
{
	color DrawClr;	//Draw color of the figure
	color FillClr;	//Fill color of the figure
	bool isFilled;	//Figure Filled or not
	int BorderWdth;	//Width of figure borders

};

#endif