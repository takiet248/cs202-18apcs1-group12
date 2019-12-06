#include"Draw.h"

void printSubBar()
{
	for (int i = 0; i < 110; i++)
		putchar(205);
}

void printBar()
{
	gotoXY(0, 0);
	printSubBar();
	gotoXY(0, 6);
	printSubBar();
	gotoXY(0, 12);
	printSubBar();
	gotoXY(0, 18);
	printSubBar();
	gotoXY(0, 24);
	printSubBar();
	gotoXY(0, 30);
	printSubBar();
	gotoXY(0, 36);
	printSubBar();
}

void printPost()
{
	gotoXY(110, 0); putchar(187);
	gotoXY(110, 36); putchar(188);
	for (int i = 6; i < 31; i += 6)
	{
		gotoXY(110, i);
		putchar(185);
		//cout << endl;
	}
	for (int i = 1; i < 6; i++)
	{
		gotoXY(110, i);
		putchar(186);
	}
	for (int i = 7; i < 12; i++)
	{
		gotoXY(110, i);
		putchar(186);
	}
	for (int i = 13; i < 18; i++)
	{
		gotoXY(110, i);
		putchar(186);
	}
	for (int i = 19; i < 24; i++)
	{
		gotoXY(110, i);
		putchar(186);
	}
	for (int i = 25; i < 30; i++)
	{
		gotoXY(110, i);
		putchar(186);
	}
	for (int i = 31; i < 36; i++)
	{
		gotoXY(110, i);
		putchar(186);
	}
}

void printFrame()
{
	TextColor(8);
	printBar();
	printPost();
}
