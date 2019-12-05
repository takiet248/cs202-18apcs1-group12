
#include"cPeople.h"
#include"console.h"
#include"Draw.h"
#include"CGAME.h"
#include"Ship.h"
#include"Owl.h"
#include"Bear.h"
#include"SplashScreen.h"
#include<thread>
#include"Menu.h"
char moving;
CGAME cg;
void sub()
{
	while (true)
	{
		if (!cg.getPeople()->isDead())
		{
			cg.updatePosPeople(moving);
			moving = ' ';
			cg.updatePosAnimal();
			cg.updatePosVehicle();
		}
		if (cg.getPeople()->isImpactWAnimal(cg.getAnimal())||cg.getPeople()->isImpactWVehicle(cg.getVehicle()))
		{
			gotoXY(0, 40);
			cout << "Impact" << endl;
		}
		Sleep(50);
	}
}

int main()
{
	FixConsoleWindow();
	Nocursortype();

	srand(time(NULL));

	printFrame();

	char temp;

	thread t1(sub);
	while (true)
	{
		if (!cg.getPeople()->isDead())
		{
			temp = _getch();
			moving = temp;
		}
		else
			cg.exitGame((HANDLE)t1.native_handle());
	}
	gotoXY(0, 40);

	return 0;
}