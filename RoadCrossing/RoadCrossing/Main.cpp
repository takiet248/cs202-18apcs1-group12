#include"cPeople.h"
#include"console.h"
#include"Draw.h"
#include"CGAME.h"
#include"Ship.h"
#include"Owl.h"
#include"Bear.h"
#include"Train.h"
#include"TrafficLight.h"
#include"SplashScreen.h"
#include"Menu.h"
#include<thread>

bool init = true;
char moving;
CGAME cg;
int menuState;

void sub()
{
	cg.printLevel();
	while (cg.isRunning())
	{
		while (cg.getPeople()->isDead() && cg.isRunning())
			Sleep(1000);
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
			cg.lose();
			init = true;
			if (menuState != -1)
				PlaySound(TEXT("TeamRocket.wav"), NULL, SND_ASYNC);
		}
		if (cg.getPeople()->isFinish())
		{
			PlaySound(TEXT("LuckyNumberShow.wav"), NULL, SND_ASYNC | SND_LOOP);
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
	else if (menuState == 1)
	{
		init = false;
		system("cls");
		PlaySound(TEXT("LuckyNumberShow.wav"), NULL, SND_ASYNC | SND_LOOP);
	}
	else
	{
		system("cls");
		PlaySound(TEXT("LuckyNumberShow.wav"), NULL, SND_ASYNC | SND_LOOP);
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
				system("cls");
				cg.exitGame(t1.native_handle());
			}
			else if (temp == 'P')
			{
				cg.pauseGame(t1.native_handle());
				gotoXY(134, 8);
				TextColor(12);
				cout << "GAME PAUSED";
				gotoXY(131, 9);
				TextColor(14);
				cout << "PRESS R TO RESUME";
			}
			else if (temp == 'R')
			{
				gotoXY(121, 8);
				cout << "                                      ";
				gotoXY(121, 9);
				cout << "                                      ";
				gotoXY(121, 10);
				cout << "                                      ";
				cg.resumeGame((HANDLE)t1.native_handle());
				moving = temp;
			}
			else if (temp == 'T')
			{
				cg.pauseGame(t1.native_handle());
				TextColor(14);
				gotoXY(125, 8);
				cout << "PLEASE INPUT YOUR FILENAME";
				TextColor(15);
				gotoXY(125, 9);
				string name;
				ShowCur(true);
				cin >> name;
				ShowCur(false);
				gotoXY(125, 10);
				TextColor(12);
				cout << "FILE SAVED! PRESS R TO RESUME";
				string tail = ".txt";
				string save = name + tail;
				cg.saveGame(save);
			}
			else if (temp == 'L')
			{
				cg.pauseGame(t1.native_handle());
				TextColor(12);
				gotoXY(123, 8);
				cout << "INPUT THE NAME OF YOUR SAVED FILE";
				gotoXY(123, 9);
				TextColor(14);
				string name_;
				ShowCur(true);
				cin >> name_;
				ShowCur(false);
				string tail_ = ".txt";
				string load = name_ + tail_;
				bool ans = cg.loadGame(load);
				if (ans == false)
				{
					gotoXY(121, 8);
					cout << "                                      ";
					gotoXY(121, 9);
					cout << "                                      ";
					Sleep(500);
					TextColor(14);
					gotoXY(128, 8);
					cout << "YOUR FILE DOES NOT EXIST";
					TextColor(12);
					gotoXY(131, 9);
					cout << "PRESS R TO RESUME";
				}
				else
				{
					cg.loadGame(load);
					cg.resumeGame((HANDLE)t1.native_handle());
				}
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
			{
				PlaySound(TEXT("LuckyNumberShow.wav"), NULL, SND_ASYNC | SND_LOOP);
				cg.startGame();
			}
			else if (temp == 27)
			{
				system("cls");
				cg.exitGame(t1.native_handle());
				return 0;
			}
		}
	}
	gotoXY(0, 40);
	return 0;
}