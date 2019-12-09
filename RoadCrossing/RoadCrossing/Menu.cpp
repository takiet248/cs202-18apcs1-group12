#include"Menu.h"

void frameMini(int x, int y)
{
	for (int i = 1; i <= 26; ++i)
	{
		gotoXY(x + i, y);
		putchar(205); //─
		gotoXY(x + i, y + 2);
		putchar(205); //─
	}
	gotoXY(x, y + 1);
	putchar(186); //│
	gotoXY(x + 27, y + 1);
	putchar(186); //│
	gotoXY(x, y);
	putchar(201); //┌
	gotoXY(x + 27, y);
	putchar(187); //┐
	gotoXY(x, y + 2);
	putchar(200); //└
	gotoXY(x + 27, y + 2);
	putchar(188); //┘
}

void printMenu()
{
	Nocursortype();
	int a = 39, b = 3, c = 190;
	gotoXY(a, b);
	TextColor(15);
	Sleep(c);
	cout << "__/\\\\\\\\____________/\\\\\\\\__/\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\__/\\\\\\\\\\_____/\\\\\\__/\\\\\\________/\\\\\\_" << endl;
	gotoXY(a, b + 1);
	TextColor(9);
	Sleep(c);
	cout << " _\\/\\\\\\\\\\\\________/\\\\\\\\\\\\_\\/\\\\\\///////////__\\/\\\\\\\\\\\\___\\/\\\\\\_\\/\\\\\\_______\\/\\\\\\_" << endl;
	gotoXY(a, b + 2);
	TextColor(10);
	Sleep(c);
	cout << "  _\\/\\\\\\//\\\\\\____/\\\\\\//\\\\\\_\\/\\\\\\_____________\\/\\\\\\/\\\\\\__\\/\\\\\\_\\/\\\\\\_______\\/\\\\\\_" << endl;
	gotoXY(a, b + 3);
	TextColor(11);
	Sleep(c);
	cout << "   _\\/\\\\\\\\///\\\\\\/\\\\\\/_\\/\\\\\\_\\/\\\\\\\\\\\\\\\\\\\\\\_____\\/\\\\\\//\\\\\\_\\/\\\\\\_\\/\\\\\\_______\\/\\\\\\_" << endl;
	gotoXY(a, b + 4);
	TextColor(12);
	Sleep(c);
	cout << "    _\\/\\\\\\__\\///\\\\\\/___\\/\\\\\\_\\/\\\\\\///////______\\/\\\\\\\\//\\\\\\\\/\\\\\\_\\/\\\\\\_______\\/\\\\\\_";
	gotoXY(a, b + 5);
	TextColor(13);
	Sleep(c);
	cout << "     _\\/\\\\\\____\\///_____\\/\\\\\\_\\/\\\\\\_____________\\/\\\\\\_\\//\\\\\\/\\\\\\_\\/\\\\\\_______\\/\\\\\\_";
	gotoXY(a, b + 6);
	TextColor(14);
	Sleep(c);
	cout << "      _\\/\\\\\\_____________\\/\\\\\\_\\/\\\\\\_____________\\/\\\\\\__\\//\\\\\\\\\\\\_\\//\\\\\\______/\\\\\\__" << endl;
	gotoXY(a, b + 7);
	TextColor(15);
	Sleep(c);
	cout << "       _\\/\\\\\\_____________\\/\\\\\\_\\/\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\_\\/\\\\\\___\\//\\\\\\\\\\__\\///\\\\\\\\\\\\\\\\\\/___" << endl;
	gotoXY(a, b + 8);
	TextColor(8);
	Sleep(c);
	cout << "        _\\///______________\\///__\\///////////////__\\///_____\\/////_____\\/////////_____" << endl;
	Sleep(c);
	TextColor(8);
	for (int i = 1; i <= 4; ++i)
		frameMini(67, 11 + 3 * i);

	TextColor(6);
	gotoXY(69, 15);
	cout << "NEW GAME             (N)";
	gotoXY(69, 18);
	cout << "LOAD GAME            (L)";
	gotoXY(69, 21);
	cout << "SETTING              (S)";
	gotoXY(69, 24);
	cout << "EXIT GAME            (E)";

	/*char key;
	if (_kbhit)
	{
		key = _getch();
		if (key == 'p' || key == 'P')
		{
			system("cls");
		}
		else if (key == 'l' || key == 'L')
		{
			system("cls");
		}
		else if (key == 's' || key == 'S')
		{
			system("cls");
		}
		else if (key == 'e' || key == 'E')
		{
			system("cls");
		}
		else
		{

		}
	}*/
}
