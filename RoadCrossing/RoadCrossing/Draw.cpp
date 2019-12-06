#include"Draw.h"

void printSubBar()
{
	TextColor(8);
	for (int i = 0; i < 110; i++)
		putchar(205);
}

void printBar()
{
	TextColor(8);
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
	TextColor(8);
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
	printBar();
	printPost();
	printInstruction();
	printInstructionBox();
	printStatusBox();
}

void printStatusBox()
{
	TextColor(10);
	gotoXY(134, 2);
	cout << "STATUS BOX" << endl;
	TextColor(12);
	gotoXY(125,5);
	cout << "LEVEL:  " << endl;


	TextColor(8);
	gotoXY(120, 0);
	for (int i = 0; i < 39; i++)
		putchar(205);
	gotoXY(120, 14);
	for (int i = 0; i < 39; i++)
		putchar(205);
	gotoXY(120, 4);
	for (int i = 0; i < 39; i++)
		putchar(205);

	for (int i = 1; i < 4; i++)
	{
		gotoXY(119, i);
		putchar(186);
	}

	for (int i = 1; i < 4; i++)
	{
		gotoXY(159, i);
		putchar(186);
	}

	for (int i = 5; i < 14; i++)
	{
		gotoXY(119, i);
		putchar(186);
	}

	for (int i = 5; i < 14; i++)
	{
		gotoXY(159, i);
		putchar(186);
	}
	gotoXY(119, 4); putchar(204);
	gotoXY(119, 14); putchar(200);
	gotoXY(119, 0); putchar(201);

	gotoXY(159, 4); putchar(185);
	gotoXY(159, 14); putchar(188);
	gotoXY(159, 0); putchar(187);
}

void printInstruction()
{
	TextColor(11);
	gotoXY(133, 18);
	cout << "INSTRUCTIONS" << endl;
	int a = 125, b = 20;
	gotoXY(a, b + 1);
	TextColor(6);
	cout << "PRESS L TO SAVE GAME" << endl;
	gotoXY(a, b + 3);
	cout << "PRESS T TO LOAD GAME" << endl;
	gotoXY(a, b + 5);
	cout << "PRESS P TO PAUSE GAME" << endl;
	gotoXY(a, b + 7);
	cout << "PRESS ESC TO EXIT GAME" << endl;
	gotoXY(a, b + 9);

	TextColor(5);
	cout << "PRESS W TO MOVE UPWARD" << endl;
	gotoXY(a, b + 11);
	cout << "PRESS S TO MOVE DOWNWARD" << endl;
	gotoXY(a, b + 13);
	cout << "PRESS A TO MOVE TO THE LEFT" << endl;
	gotoXY(a, b + 15);
	cout << "PRESS D TO MOVE TO THE RIGHT" << endl;
}

void printInstructionBox()
{
	TextColor(8);
	gotoXY(120, 16);
	for (int i = 0; i < 39; i++)
		putchar(205);

	gotoXY(120, 20);
	for (int i = 0; i < 39; i++)
		putchar(205);

	gotoXY(120, 28);
	for (int i = 0; i < 39; i++)
		putchar(205);

	gotoXY(120, 36);
	for (int i = 0; i < 39; i++)
		putchar(205);

	for (int i = 29; i < 36; i++)
	{
		gotoXY(119, i);
		putchar(186);
	}

	for (int i = 29; i < 36; i++)
	{
		gotoXY(159, i);
		putchar(186);
	}

	for (int i = 21; i < 28; i++)
	{
		gotoXY(119, i);
		putchar(186);
	}

	for (int i = 21; i < 28; i++)
	{
		gotoXY(159, i);
		putchar(186);
	}

	for (int i = 17; i < 20; i++)
	{
		gotoXY(119, i);
		putchar(186);
	}

	for (int i = 17; i < 20; i++)
	{
		gotoXY(159, i);
		putchar(186);
	}

	gotoXY(159, 28); putchar(185);
	gotoXY(159, 20); putchar(185);
	gotoXY(159, 36); putchar(188);
	gotoXY(159, 16); putchar(187);

	gotoXY(119, 28); putchar(204);
	gotoXY(119, 20); putchar(204);
	gotoXY(119, 36); putchar(200);
	gotoXY(119, 16); putchar(201);
}
