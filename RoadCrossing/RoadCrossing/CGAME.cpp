#include"CGAME.h"

CGAME::~CGAME()
{
	if (people)
		delete[]people;
	people = nullptr;

}

void CGAME::updatePosPeople(char key)
{
	if (_kbhit())
	{
		key = _getch();
		if (key == 'a' || key == 'A')
			people->Left(2);
		else if (key == 'w' || key == 'W')
			people->Up(6);
		else if (key == 'd' || key == 'D')
			people->Right(2);
		else if (key == 's' || key == 'S')
			people->Down(6);
	}
}
