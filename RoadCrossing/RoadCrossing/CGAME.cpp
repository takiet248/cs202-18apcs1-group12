#include"CGAME.h"
const int MaxObject = 11;
const int MaxSpeed = 30;
CGAME::~CGAME()
{
	if (player)
		delete[]player;
	player = nullptr;
	if (lights)
		delete[]lights;
	lights = nullptr;
}

CGAME::CGAME()
{
	player = new cPeople;
	lights = new TrafficLight;
	level = 13;
	speed = 200;
	curAN = 2;
	curVN = 2;
	finalw = false;
}
int CGAME::getSpeed()
{
	return speed;
}
void CGAME::drawGame()
{
	printFrame();
}

cPeople* CGAME::getPeople()
{
	return this->player;
}

void CGAME::updatePosPeople(char key)
{
	player->display();

	if (key == 'a' || key == 'A')
	{
		player->Left(3);
		player->xClear(player->getX() + 3);
		player->display();
	}
	else if (key == 'w' || key == 'W')
	{
		player->Up(6);
		player->yClear(player->getY() + 6);
		player->display();
	}
	else if (key == 'd' || key == 'D')
	{
		player->Right(3);
		player->xClear(player->getX() - 3);
		player->display();
	}
	else if (key == 's' || key == 'S')
	{
		player->Down(6);
		player->yClear(player->getY() - 6);
		player->display();
	}

}

void CGAME::updatePosBear()
{
	if (rand() % 23 == 1 && VB.size()<curAN)
	{
		Bear b;
		VB.push_back(b);
	}
	for (unsigned int i = 0; i < VB.size(); ++i)
	{
		if (VB[i].getX() == 105)
		{
			VB[i].erase(VB[i].getX());
			VB.pop_front();
		}
		else if (i == 0)
		{
			if (VB[i].getX() == -4)
			{
				for (int j = 0; j < 5; ++j)
					VB[i].move();
				VB[i].display();
			}
			else
			{
				VB[i].move();
				VB[i].erase(VB[i].getX() - 1);
				VB[i].display();
			}
		}
		else
		{
			if (i - 1 >= 0 && VB[i - 1].getX() - VB[i].getX()>16)
			{
				if (VB[i].getX() == -4)
				{
					for (int j = 0; j < 5; ++j)
						VB[i].move();
					VB[i].display();
				}
				else
				{
					VB[i].move();
					VB[i].erase(VB[i].getX() - 1);
					VB[i].display();
				}
			}
		}
	}
}

void CGAME::updatePosOwl()
{
	
	if (rand() % 18 == 1 && VO.size()<curAN)
	{
		Owl o;
		VO.push_back(o);
	}
	for (unsigned int i = 0; i < VO.size(); ++i)
	{
		if (VO[i].getX() == 105)
		{
			VO[i].erase(VO[i].getX());
			VO.pop_front();
		}
		else if (i == 0)
		{
			if (VO[i].getX() == -4)
			{
				for (int j = 0; j < 5; ++j)
					VO[i].move();
				VO[i].display();
			}
			else
			{
				VO[i].move();
				VO[i].erase(VO[i].getX() - 1);
				VO[i].display();
			}
		}
		else
		{
			if (i - 1 >= 0 && VO[i - 1].getX() - VO[i].getX()>14)
			{
				if (VO[i].getX() == -4)
				{
					for (int j = 0; j < 5; ++j)
						VO[i].move();
					VO[i].display();
				}
				else
				{
					VO[i].move();
					VO[i].erase(VO[i].getX() - 1);
					VO[i].display();
				}
			}
		}
	}
}

void CGAME::printTrafficLights()
{
	lights->change(50);
	if (lights->getState() == 1)
	{
		TextColor(4);
		gotoXY(111, 19);
		putchar(178);
		putchar(178);
		TextColor(0);
		gotoXY(111, 20);
		putchar(178);
		putchar(178);
	}
	else
	{
		TextColor(0);
		gotoXY(111, 19);
		putchar(178);
		putchar(178);
		TextColor(2);
		gotoXY(111, 20);
		putchar(178);
		putchar(178);
	}
	
}

void CGAME::printLevel()
{
	TextColor(15);
	gotoXY(140, 5);
	cout << level;
}

void CGAME::levelUp()
{
	++level;
}
bool CGAME::isFW()
{
	return finalw;
}
void CGAME::finalWin()
{
	finalw = true;
}
void CGAME::win()
{
<<<<<<< HEAD
	system("cls");
	Sleep(500);
	player->reset();
	levelUp();
	printFrame();
	printLevel();
=======
	clrscr();
	gotoXY(50, 20);
	bool finalw=false;
	cout << "LEVEL " << level + 1 << endl;
	if (level<12)
	{
		int t = rand() % 3;
		if (t == 0)
		{
			if (speed > MaxSpeed)
			{
				int tmpspeed = speed - level * 10;
				if (tmpspeed >= MaxSpeed)
					speed = tmpspeed;
				else
					speed = MaxSpeed;
				gotoXY(50, 22);
				cout << "+ SPEED" << endl;
			}
			else if (curAN < MaxObject)
			{
				curAN += 3;
				gotoXY(50, 22);
				cout << "+ Animals" << endl;
			}
			else if (curVN < MaxObject)
			{
				curVN += 3;
				gotoXY(50, 22);
				cout << "+ Vehicles" << endl;
			}
		}
		else if (t == 1)
		{
			if (curAN<MaxObject)
			{
				curAN += 3;
				gotoXY(50, 22);
				cout << "+ Animals" << endl;
			}
			else if (speed > MaxSpeed)

			{
				int tmpspeed = speed - level * 10;
				if (tmpspeed >= MaxSpeed)
					speed = tmpspeed;
				else
					speed = MaxSpeed;
				gotoXY(50, 22);
				cout << "+ SPEED" << endl;
			}
			else if (curVN < MaxObject)
			{
				curVN += 3;
				gotoXY(50, 22);
				cout << "+ Vehicles" << endl;
			}
		}
		else if (t == 2)
		{
			if (curVN<MaxObject)
			{
				curVN += 3;
				gotoXY(50, 22);
				cout << "+ Vehicles" << endl;
			}
			else if (speed > MaxSpeed)

			{
				int tmpspeed = speed - level * 10;
				if (tmpspeed >= MaxSpeed)
					speed = tmpspeed;
				else
					speed = MaxSpeed;
				gotoXY(50, 22);
				cout << "+ SPEED" << endl;
			}
			else if (curAN < MaxObject)
			{
				curAN += 3;
				gotoXY(50, 22);
				cout << "+ Animals" << endl;
			}
		}
		gotoXY(50, 24);
		for (int i = 0; i < 50; ++i)
		{
			TextColor(10);
			cout << "_";
			Sleep(20);
		}
	}
	else if (level==12)
	{
		curAN = curVN = MaxObject;
		speed = MaxSpeed;
	}
	else
	{
		finalWin();
	}
	if (!finalw)
	{
		Sleep(400);
		clrscr();
		player->reset();
		VB.clear();
		VO.clear();
		VT.clear();
		VS.clear();
		levelUp();
		printFrame();
		printLevel();
	}
>>>>>>> 034bb5ccc3080a86bca86ce3c2df59dd2d09048a
}

void CGAME::updatePosAnimal()//Thực hiện cho CDINAUSOR & CBIRD di chuyển
{
	updatePosBear();
	updatePosOwl();
}

void CGAME::updatePosTrain()
{
	if (rand() % 22 == 1 && VT.size() < curVN)
	{
		Train t;
		VT.push_back(t);
	}
	for (unsigned int i = 0; i < VT.size(); ++i)
	{
		if (VT[i].getX() == 1)
		{
			VT[i].erase(VT[i].getX());
			VT.pop_front();
		}
		else if (i == 0)
		{
			if (lights->getState() == 0)
			{
				if(VT[i].getX() == 110)
				{
					for (int j = 0; j < 8; ++j)
						VT[i].move();
					VT[i].display();
				}
				else
				{
					VT[i].move();
					VT[i].erase(VT[i].getX() + 1);
					VT[i].display();
				}
			}
		}
		else
		{
			if (i - 1 >= 0 && VT[i - 1].getX() - VT[i].getX()<-20)
			{
				if (lights->getState() == 0)
				{
					if (VT[i].getX() == 110)
					{
						for (int j = 0; j < 8; ++j)
							VT[i].move();
						VT[i].display();
					}
					else
					{
						VT[i].move();
						VT[i].erase(VT[i].getX() + 1);
						VT[i].display();
					}
				}
			}
		}
	}
}
void CGAME::updatePosShip()
{
	if (rand() % 22 == 1 && VS.size() < curVN)
	{
		Ship s;
		VS.push_back(s);
	}
	for (unsigned int i = 0; i < VS.size(); ++i)
	{
		if (VS[i].getX() == 1)
		{
			VS[i].erase(VS[i].getX());
			VS.pop_front();
		}
		else if (i == 0)
		{

			if (VS[i].getX() == 110)
			{
				for (int j = 0; j < 8; ++j)
					VS[i].move();
				VS[i].display();
			}
			else
			{
				VS[i].move();
				VS[i].erase(VS[i].getX() + 1);
				VS[i].display();
			}
		}
		else
		{
			if (i - 1 >= 0 && VS[i - 1].getX() - VS[i].getX()<-22)
			{
				if (VS[i].getX() == 110)
				{
					for (int j = 0; j < 8; ++j)
						VS[i].move();
					VS[i].display();
				}
				else
				{
					VS[i].move();
					VS[i].erase(VS[i].getX() + 1);
					VS[i].display();
				}
			}
		}
	}
}

void CGAME::updatePosVehicle()
{
	updatePosShip();
	updatePosTrain();
}

void CGAME::exitGame(HANDLE)
{
	exit(0);
}

void CGAME::pauseGame(HANDLE handle_)
{
	SuspendThread(handle_);	
}

void CGAME::resumeGame(HANDLE handle_)
{
	while (ResumeThread(handle_) > 0);
}

vector<Animal*> CGAME::getAnimal()
{
	vector<Animal*> res;
	Animal *pA;
	unsigned int i = 0;
	for (i; i < VB.size() && i < VO.size(); ++i)
	{
		pA = &VB[i];
		res.push_back(pA);
		pA = &VO[i];
		res.push_back(pA);
	}
	for (i; i < VB.size(); ++i)
	{
		pA = &VB[i];
		res.push_back(pA);
	}
	for (i; i < VO.size(); ++i)
	{
		pA = &VO[i];
		res.push_back(pA);
	}
	return res;
}

int CGAME::Menu()
{
	splashScreen();
	bool validInput = false;
	char input;
	while (!validInput)
	{
		printMenu();
		if (_kbhit())
		{
			input = _getch();
			if (input == 27)
			{
				system("cls");
				return -1;
			}
			else
			{
				system("cls");
				//printFrame();
				validInput = true;
			}
		}
	}
	return 0;
}

vector<Vehicle*> CGAME::getVehicle()
{
	vector<Vehicle*> res;
	Vehicle *pV;
	unsigned int i = 0;
	for (i; i < VT.size() && i < VS.size(); ++i)
	{
		pV = &VT[i];
		res.push_back(pV);
		pV = &VS[i];
		res.push_back(pV);
	}
	for (i; i < VT.size(); ++i)
	{
		pV = &VT[i];
		res.push_back(pV);
	}
	for (i; i < VS.size(); ++i)
	{
		pV = &VS[i];
		res.push_back(pV);
	}
	return res;
}