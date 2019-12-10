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

bool init = true;
char moving;
CGAME cg;
void sub()
{
	cg.printLevel();
	while (true)
	{
		if (!cg.getPeople()->isDead() && !cg.isFW())
		{
			if (init)
			{
				
				for (int i = 0; i < 100; ++i)
				{
					cg.updatePosAnimal();
					cg.updatePosVehicle();
					cg.printTrafficLights();
				}
				init = false;
			}
			else
			{
				cg.updatePosPeople(moving);
				moving = ' ';
				cg.updatePosAnimal();
				cg.updatePosVehicle();
				cg.printTrafficLights();
			}
		}
		if (cg.getPeople()->isImpactWAnimal(cg.getAnimal()) || cg.getPeople()->isImpactWVehicle(cg.getVehicle()))
		{
			gotoXY(136, 9);
			TextColor(14);
			cout << "GAME OVER";
		}
		if (cg.getPeople()->isFinish())
		{
			gotoXY(136, 9);
			TextColor(14);
			cout << "FINISH";
			PlaySound(TEXT("SaffronCity.wav"), NULL, SND_ASYNC | SND_LOOP);
			cg.win();
			init = true;
			//moving = ' ';
		}
		/*
		if (cg.isFW())
		{
			clrscr();
			gotoXY(40, 20);
			cout << "All Stage Clear, Congratulation!" << endl;
			break;
		}
		*/
		else
			Sleep(cg.getSpeed());
	}
}

int main()
{
	FixConsoleWindow();
	Nocursortype();
	int meow = cg.Menu();
	if (meow == -1)
	{
		system("cls");
		return 0;
	}
	else 
	{
		//PlaySound(TEXT("SaffronCity.wav"), NULL, SND_ASYNC | SND_LOOP);
	}

	srand(time(NULL));
	cg.drawGame();
	char temp;
	thread t1(sub);
	while (true)
	{
		temp = _getch();
		if (!cg.getPeople()->isDead() && !cg.isFW())
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
			else if (temp == 'r')
			{
				/*gotoXY(134, 8);
				cout << "           ";
				gotoXY(131, 9);
				cout << "                       ";*/
				cg.resumeGame((HANDLE)t1.native_handle());
				moving = temp;
			}
			else
			{
				if (cg.getPeople()->isFinish()||init)
					moving = ' ';
				else
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