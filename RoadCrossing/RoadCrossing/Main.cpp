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
#include"TrafficLight.h"


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
			cg.printTrafficLights();
		}
		if (cg.getPeople()->isImpactWAnimal(cg.getAnimal())||cg.getPeople()->isImpactWVehicle(cg.getVehicle()))
		{
			gotoXY(136, 9);
			TextColor(14);
			cout << "IMPACT" << endl;
		}
		if (cg.getPeople()->isFinish())
		{
			gotoXY(136, 9);
			TextColor(14);
			cout << "FINISH" << endl;
		}
		Sleep(50);
	}
}

int main()
{
	PlaySound(TEXT("SaffronCity.wav"), NULL, SND_ASYNC | SND_LOOP);

	FixConsoleWindow();
	Nocursortype();

	srand(time(NULL));
	cg.drawGame();
	char temp;
	string name;
	thread t1(sub);
	while (true)
	{
		temp = _getch();

		if (!cg.getPeople()->isDead())
		{
			if (temp == 27)
			{
				cg.exitGame(t1.native_handle());
				//return;
			}
			else if (temp == 'p')
			{
				cg.pauseGame(t1.native_handle());
			}
			else
			{
				cg.resumeGame((HANDLE)t1.native_handle());
				moving = temp; 
			}
		}

		else
		{
			//if (temp == 'Y') cg.startGame();
			//else {
				cg.exitGame(t1.native_handle());
				//return;
		//	}
		}

	}


	/*TrafficLight meow;
	while (1)
	{
		meow.change(10);
		cout << meow.getTime() << endl;
		Sleep(1000);
		system("cls");
	}*/
	//splashScreen();
	//printMenu();
	gotoXY(0, 40);
	return 0;
}