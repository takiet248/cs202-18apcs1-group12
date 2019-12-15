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
	gotoXY(135, 2);
	cout << "STATUS BOX";
	TextColor(12);
	gotoXY(125,5);
	cout << "LEVEL:  ";


	TextColor(8);
	gotoXY(121, 0);
	for (int i = 0; i < 38; i++)
		putchar(205);
	gotoXY(121, 14);
	for (int i = 0; i < 38; i++)
		putchar(205);
	gotoXY(121, 4);
	for (int i = 0; i < 38; i++)
		putchar(205);

	for (int i = 1; i < 4; i++)
	{
		gotoXY(120, i);
		putchar(186);
	}

	for (int i = 1; i < 4; i++)
	{
		gotoXY(159, i);
		putchar(186);
	}

	for (int i = 5; i < 14; i++)
	{
		gotoXY(120, i);
		putchar(186);
	}

	for (int i = 5; i < 14; i++)
	{
		gotoXY(159, i);
		putchar(186);
	}
	gotoXY(120, 4); putchar(204);
	gotoXY(120, 14); putchar(200);
	gotoXY(120, 0); putchar(201);

	gotoXY(159, 4); putchar(185);
	gotoXY(159, 14); putchar(188);
	gotoXY(159, 0); putchar(187);
}

void printInstruction()
{
	TextColor(11);
	gotoXY(134, 18);
	cout << "INSTRUCTIONS";
	int a = 125, b = 20;
	gotoXY(a, b + 1);
	TextColor(6);
	cout << "PRESS T TO SAVE GAME";
	gotoXY(a, b + 3);
	cout << "PRESS L TO LOAD GAME";
	gotoXY(a, b + 5);
	cout << "PRESS P TO PAUSE GAME";
	gotoXY(a, b + 7);
	cout << "PRESS ESC TO EXIT GAME";
	gotoXY(a, b + 9);

	TextColor(5);
	cout << "PRESS W TO MOVE UPWARD";
	gotoXY(a, b + 11);
	cout << "PRESS S TO MOVE DOWNWARD";
	gotoXY(a, b + 13);
	cout << "PRESS A TO MOVE TO THE LEFT";
	gotoXY(a, b + 15);
	cout << "PRESS D TO MOVE TO THE RIGHT";
}

void printInstructionBox()
{
	TextColor(8);
	gotoXY(121, 16);
	for (int i = 0; i < 38; i++)
		putchar(205);

	gotoXY(121, 20);
	for (int i = 0; i < 38; i++)
		putchar(205);

	gotoXY(121, 28);
	for (int i = 0; i < 38; i++)
		putchar(205);

	gotoXY(121, 36);
	for (int i = 0; i < 38; i++)
		putchar(205);

	for (int i = 29; i < 36; i++)
	{
		gotoXY(120, i);
		putchar(186);
	}

	for (int i = 29; i < 36; i++)
	{
		gotoXY(159, i);
		putchar(186);
	}

	for (int i = 21; i < 28; i++)
	{
		gotoXY(120, i);
		putchar(186);
	}

	for (int i = 21; i < 28; i++)
	{
		gotoXY(159, i);
		putchar(186);
	}

	for (int i = 17; i < 20; i++)
	{
		gotoXY(120, i);
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

	gotoXY(120, 28); putchar(204);
	gotoXY(120, 20); putchar(204);
	gotoXY(120, 36); putchar(200);
	gotoXY(120, 16); putchar(201);
}

void printYouWon()
{
	Nocursortype();
	int a = 12, b = 11, c = 100;
	gotoXY(a, b);
	TextColor(15);
	Sleep(c);
	cout << "__/\\\\\\________/\\\\\\______/\\\\\\\\\\_______/\\\\\\________/\\\\\\_____/\\\\\\______________/\\\\\\_______/\\\\\\\\\\_______/\\\\\\\\\\_____/\\\\\\_______/\\\\\\____" << endl;
	gotoXY(a, b + 1);
	TextColor(9);
	Sleep(c);
	cout << " _\\///\\\\\\____/\\\\\\/_____/\\\\\\///\\\\\\____\\/\\\\\\_______\\/\\\\\\____\\/\\\\\\_____________\\/\\\\\\_____/\\\\\\///\\\\\\____\\/\\\\\\\\\\\\___\\/\\\\\\_____/\\\\\\\\\\\\\\__" << endl;
	gotoXY(a, b + 2);
	TextColor(10);
	Sleep(c);
	cout << "  ___\\///\\\\\\/\\\\\\/_____/\\\\\\/__\\///\\\\\\__\\/\\\\\\_______\\/\\\\\\____\\/\\\\\\_____________\\/\\\\\\___/\\\\\\/__\\///\\\\\\__\\/\\\\\\/\\\\\\__\\/\\\\\\____/\\\\\\\\\\\\\\\\\\_" << endl;
	gotoXY(a, b + 3);
	TextColor(11);
	Sleep(c);
	cout << "   _____\\///\\\\\\/______/\\\\\\______\\//\\\\\\_\\/\\\\\\_______\\/\\\\\\____\\//\\\\\\____/\\\\\\____/\\\\\\___/\\\\\\______\\//\\\\\\_\\/\\\\\\//\\\\\\_\\/\\\\\\___\\//\\\\\\\\\\\\\\__" << endl;
	gotoXY(a, b + 4);
	TextColor(12);
	Sleep(c);
	cout << "    _______\\/\\\\\\______\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\_______\\/\\\\\\_____\\//\\\\\\__/\\\\\\\\\\__/\\\\\\___\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\\\//\\\\\\\\/\\\\\\____\\//\\\\\\\\\\___" << endl;
	gotoXY(a, b + 5);
	TextColor(13);
	Sleep(c);
	cout << "     _______\\/\\\\\\______\\//\\\\\\______/\\\\\\__\\/\\\\\\_______\\/\\\\\\______\\//\\\\\\/\\\\\\/\\\\\\/\\\\\\____\\//\\\\\\______/\\\\\\__\\/\\\\\\_\\//\\\\\\/\\\\\\_____\\//\\\\\\____" << endl;
	gotoXY(a, b + 6);
	TextColor(14);
	Sleep(c);
	cout << "      _______\\/\\\\\\_______\\///\\\\\\__/\\\\\\____\\//\\\\\\______/\\\\\\________\\//\\\\\\\\\\\\//\\\\\\\\\\______\\///\\\\\\__/\\\\\\____\\/\\\\\\__\\//\\\\\\\\\\\\______\\///_____" << endl;
	gotoXY(a, b + 7);
	TextColor(15);
	Sleep(c);
	cout << "       _______\\/\\\\\\_________\\///\\\\\\\\\\/______\\///\\\\\\\\\\\\\\\\\\/__________\\//\\\\\\__\\//\\\\\\_________\\///\\\\\\\\\\/_____\\/\\\\\\___\\//\\\\\\\\\\_______/\\\\\\____" << endl;
	gotoXY(a, b + 8);
	TextColor(8);
	Sleep(c);
	cout << "        _______\\///____________\\/////__________\\/////////_____________\\///____\\///____________\\/////_______\\///_____\\/////_______\\///_____" << endl;
	printTwinkle();
	printTwinkle();
	printTwinkle();
	printTwinkle();
	printTwinkle();
	printTwinkle();
	printTwinkle();
	printTwinkle();
	printTwinkle();
	printTwinkle();
	printTwinkle();
	printTwinkle();

}

void printTwinkle()
{
	int i = 0;
	clrscr();
	do
	{
		i++;
		int a = 12, b = 11;
		gotoXY(a, b);
		TextColor(i + 6);
		cout << "__/\\\\\\________/\\\\\\______/\\\\\\\\\\_______/\\\\\\________/\\\\\\_____/\\\\\\______________/\\\\\\_______/\\\\\\\\\\_______/\\\\\\\\\\_____/\\\\\\_______/\\\\\\____" << endl;
		gotoXY(a, b + 1);
		TextColor(i);
		cout << " _\\///\\\\\\____/\\\\\\/_____/\\\\\\///\\\\\\____\\/\\\\\\_______\\/\\\\\\____\\/\\\\\\_____________\\/\\\\\\_____/\\\\\\///\\\\\\____\\/\\\\\\\\\\\\___\\/\\\\\\_____/\\\\\\\\\\\\\\__" << endl;
		gotoXY(a, b + 2);
		TextColor(i + 1);
		cout << "  ___\\///\\\\\\/\\\\\\/_____/\\\\\\/__\\///\\\\\\__\\/\\\\\\_______\\/\\\\\\____\\/\\\\\\_____________\\/\\\\\\___/\\\\\\/__\\///\\\\\\__\\/\\\\\\/\\\\\\__\\/\\\\\\____/\\\\\\\\\\\\\\\\\\_" << endl;
		gotoXY(a, b + 3);
		TextColor(i + 2);
		cout << "   _____\\///\\\\\\/______/\\\\\\______\\//\\\\\\_\\/\\\\\\_______\\/\\\\\\____\\//\\\\\\____/\\\\\\____/\\\\\\___/\\\\\\______\\//\\\\\\_\\/\\\\\\//\\\\\\_\\/\\\\\\___\\//\\\\\\\\\\\\\\__" << endl;
		gotoXY(a, b + 4);
		TextColor(i + 3);
		cout << "    _______\\/\\\\\\______\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\_______\\/\\\\\\_____\\//\\\\\\__/\\\\\\\\\\__/\\\\\\___\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\\\//\\\\\\\\/\\\\\\____\\//\\\\\\\\\\___" << endl;
		gotoXY(a, b + 5);
		TextColor(i + 4);
		cout << "     _______\\/\\\\\\______\\//\\\\\\______/\\\\\\__\\/\\\\\\_______\\/\\\\\\______\\//\\\\\\/\\\\\\/\\\\\\/\\\\\\____\\//\\\\\\______/\\\\\\__\\/\\\\\\_\\//\\\\\\/\\\\\\_____\\//\\\\\\____" << endl;
		gotoXY(a, b + 6);
		TextColor(i + 5);
		cout << "      _______\\/\\\\\\_______\\///\\\\\\__/\\\\\\____\\//\\\\\\______/\\\\\\________\\//\\\\\\\\\\\\//\\\\\\\\\\______\\///\\\\\\__/\\\\\\____\\/\\\\\\__\\//\\\\\\\\\\\\______\\///_____" << endl;
		gotoXY(a, b + 7);
		TextColor(i + 6);
		cout << "       _______\\/\\\\\\_________\\///\\\\\\\\\\/______\\///\\\\\\\\\\\\\\\\\\/__________\\//\\\\\\__\\//\\\\\\_________\\///\\\\\\\\\\/_____\\/\\\\\\___\\//\\\\\\\\\\_______/\\\\\\____" << endl;
		gotoXY(a, b + 8);
		TextColor(i - 1);
		cout << "        _______\\///____________\\/////__________\\/////////_____________\\///____\\///____________\\/////_______\\///_____\\/////_______\\///_____" << endl;
		Sleep(150);
	} while (i < 9);
}