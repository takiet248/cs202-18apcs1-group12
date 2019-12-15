#include"Animal.h"
#include<mutex>

void Animal::display()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int a = mX + j;
			int b = mY + i;
			gotoXY(a, b);
			putchar(A.a[i][j]);
		}
	}
}

void Animal::move()
{
	++mX;
}

int Animal::getX()
{
	return mX;
}

int Animal::getY()
{
	return mY;
}

void Animal::setPos(int a, int b)
{
	this->mX = a;
	this->mY = b;
}

void Animal::erase(int n)
{
	int x = n;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int a = n + j;
			int b = mY + i;
			gotoXY(a, b);
			putchar(' ');
		}
	}
}