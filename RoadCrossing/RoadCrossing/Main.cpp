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
int menuState;

void sub()
{
	cg.printLevel();
	while (cg.isRunning())
	{
		while (cg.getPeople()->isDead()&&cg.isRunning())
			Sleep(1000);
		if (!cg.isRunning())
			return;
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
			TextColor(14);
			gotoXY(136, 7);
			cout << "GAME OVER";
			gotoXY(132, 8);
			TextColor(15);
			cout << "PRESS Y TO RESTART";
			gotoXY(130, 9);
			TextColor(12);
			cout << "PRESS ESC TO EXIT GAME";
			if (menuState != 1)
				PlaySound(TEXT("Opening.wav"), NULL, SND_ASYNC);

		}
		if (cg.getPeople()->isFinish())
		{
			gotoXY(136, 9);
			TextColor(14);
			cg.win();
			init = true;
		}
		if (cg.isFW())
		{	
			clrscr();			
			break;
		}
		else
			Sleep(cg.getSpeed());
	}
}

int main()
{
	FixConsoleWindow();
	Nocursortype();
	splashScreen();
	menuState = cg.Menu();

	if (menuState == -1)
	{
		system("cls");
		return 0;
	}
	else 
	{
		PlaySound(TEXT("SaffronCity.wav"), NULL, SND_ASYNC | SND_LOOP);
	}
	
	srand(time(NULL));
	cg.drawGame();
	char temp;
	thread t1(sub);
	while (true)
	{
		temp = _getch();
		temp = toupper(temp);
		if (!cg.getPeople()->isDead() && !cg.isFW())
		{
			if (temp == 27)
			{
				cg.exitGame(t1.native_handle());
			}
			else if (temp == 'P')
			{
				cg.pauseGame(t1.native_handle());
				gotoXY(134, 8);
				TextColor(15);
				cout << "GAME PAUSED";
				gotoXY(131, 9);
				cout << "PRESS R TO RESUME";
			}
			else if (temp == 'R')
			{
				gotoXY(134, 8);
				cout << "           ";
				gotoXY(131, 9);
				cout << "                  ";
				cg.resumeGame((HANDLE)t1.native_handle());
				moving = temp;
			}
			else
			{
				if (cg.getPeople()->isFinish() || init)
					moving = ' ';
				else
					moving = temp;
			}
		}
		else
		{
			if (temp == 'Y') 
				cg.startGame();
			else 
			{
				cg.exitGame(t1.native_handle());
				return 0;
			}
		}
	}
	
	printYouWon();
	gotoXY(0, 40);
	return 0;
}