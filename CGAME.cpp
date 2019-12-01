#include"CGAME.h"

CGAME::~CGAME()
{
	if (player)
		delete[]player;
	player = nullptr;

}

void CGAME::updatePosPeople(char key)
{
	if (_kbhit())
	{
		key = _getch();
		if (key == 'a' || key == 'A')
			player->Left(2);
		else if (key == 'w' || key == 'W')
			player->Up(6);
		else if (key == 'd' || key == 'D')
			player->Right(2);
		else if (key == 's' || key == 'S')
			player->Down(6);
	}
}

CGAME::CGAME()
{
	player = new cPeople;
	for (int i = 0; i < 5; ++i)
	{
		Bear *b=new Bear;
		VB.push_back(*b);
	}
	for (int i = 0; i < 3; ++i)
	{
		Owl *o = new Owl;
		VO.push_back(*o);
	}
}

//void updatePosVehicle(); //Thực hiện cho CTRUCK & CCAR di chuyển
void CGAME::updatePosAnimal()//Thực hiện cho CDINAUSOR & CBIRD di chuyển
{
	updatePosBear();
	updatePosOwl();
}

void CGAME::updatePosBear()
{
	for (unsigned int i = 0; i < VB.size(); ++i)
	{
		if (VB[i].getX() == 105)
		{
			VB[i].erase(VB[i].getX());
			VB.pop_front();
			Bear *b = new Bear;
			VB.push_back(*b);
		}
		if (i == 0)
		{
			VB[i].move();
			VB[i].erase(VB[i].getX() - 1);
			VB[i].display();
		}
		else
		{
			if (i - 1 >= 0 && VB[i - 1].getX() - VB[i].getX()>8)
			{
				VB[i].move();
				VB[i].erase(VB[i].getX() - 1);
				VB[i].display();
			}
		}
	}
}

void CGAME::updatePosOwl()
{
	for (unsigned int i = 0; i < VO.size(); ++i)
	{
		if (VO[i].getX() == 105)
		{
			VO[i].erase(VO[i].getX());
			VO.pop_front();
			Owl *o = new Owl;
			VO.push_back(*o);
		}
		if (i == 0)
		{
			VO[i].move();
			VO[i].erase(VO[i].getX() - 1);
			VO[i].display();
		}
		else
		{
			if (i - 1 >= 0 && VO[i - 1].getX() - VO[i].getX()>8)
			{
				VO[i].move();
				VO[i].erase(VO[i].getX() - 1);
				VO[i].display();
			}
		}
	}
}