#include"CGAME.h"
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
	Bear b;
	Owl o;
	Train t;
	Ship s;
	VB.push_back(b);
	VO.push_back(o);
	VT.push_back(t);
	VS.push_back(s);
	lights = new TrafficLight;
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

void CGAME::updatePosVehicle()
{
	
	updatePosTrain();
	updatePosShip();
}

void CGAME::updatePosAnimal()
{
	updatePosBear();
	updatePosOwl();
}

void CGAME::updatePosBear()
{
	//lights->change(35);
	if (rand() % 23 == 1 && VB.size()<=4)
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
				VB[i].move();
				VB[i].erase(VB[i].getX() - 1);
				VB[i].display();
		}
		else
		{
			if (i - 1 >= 0 && VB[i - 1].getX() - VB[i].getX()>16)
			{
				
			//	if (lights->getState() == 0)
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
	
	if (rand() % 18 == 1 && VO.size() <= 4)
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
			VO[i].move();
			VO[i].erase(VO[i].getX() - 1);
			VO[i].display();
		}
		else
		{
			if (i - 1 >= 0 && VO[i - 1].getX() - VO[i].getX()>14)
			{
				VO[i].move();
				VO[i].erase(VO[i].getX() - 1);
				VO[i].display();
			}
		}
	}
}

void CGAME::updatePosTrain()
{
	lights->change(35);

	if (rand() % 7 == 1 && VT.size() <= 4)
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
				VT[i].move();
				VT[i].erase(VT[i].getX() + 1);
				VT[i].display();
			}
		}
		else
		{
			if (i - 1 >= 0 && abs(VT[i - 1].getX() - VT[i].getX()) > 18)
			{
				if (lights->getState() == 0)
				{
					VT[i].move();
					VT[i].erase(VT[i].getX() + 1);
					VT[i].display();
				}
			}
		}
	}
	if (lights->getState() == 0)
	{
		gotoXY(111, 19);
		TextColor(4);
		putchar(178);
		putchar(178);
	}
	else
	{
		gotoXY(111, 19);
		TextColor(2);
		putchar(178);
		putchar(178);
	}
}

void CGAME::updatePosShip()
{
	if (rand() % 19 == 1 && VS.size() <= 4)
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
			VS[i].move();
			VS[i].erase(VS[i].getX() + 1);
			VS[i].display();
		}
		else
		{
			if (i - 1 >= 0 && abs(VS[i - 1].getX() - VS[i].getX()) > 20)
			{
				VS[i].move();
				VS[i].erase(VS[i].getX() + 1);
				VS[i].display();
			}
		}
	}
}

void CGAME::exitGame(HANDLE)
{
	exit(0);
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

vector<Vehicle*> CGAME::getVehicle()
{
	vector<Vehicle*> res;
	Vehicle* pA;
	unsigned int i = 0;
	for (i; i < VT.size() && i < VS.size(); ++i)
	{
		pA = &VT[i];
		res.push_back(pA);
		pA = &VS[i];
		res.push_back(pA);
	}
	for (i; i < VT.size(); ++i)
	{
		pA = &VT[i];
		res.push_back(pA);
	}
	for (i; i < VS.size(); ++i)
	{
		pA = &VS[i];
		res.push_back(pA);
	}
	return res;
}
