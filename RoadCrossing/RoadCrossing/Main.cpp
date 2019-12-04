#include"cPeople.h"
#include"console.h"
#include"Draw.h"
#include"CGAME.h"
#include"Ship.h"
#include"Owl.h"
#include"Bear.h"
#include<thread>

int main()
{
	Nocursortype();
	srand(1357937);
	//printFrame();
	CGAME cg;
	char key = _getch();
	while (true)
	{
		cg.drawGame();
		cg.updatePosPeople(key);
		cg.updatePosAnimal();
		Sleep(100);
	}
	/*int time = 5, state = 1, newTime = 15;
	
	while (true)
	{
		system("cls");
		time--;
		cout << time << "  " << state;
		if (time == 0)
		{
			state = 1 - state;
			time = (state ? newTime / 2 : newTime);
		}
		Sleep(1000);
	}*/
	gotoXY(0, 40);
	return 0;
}