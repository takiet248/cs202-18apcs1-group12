#include"Vehicle.h"

int Vehicle::getX()
{
	return mX;
}

int Vehicle::getY()
{
	return mY;
}

void Vehicle::display()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int a = mX + j;
			int b = mY + i;
			gotoXY(a, b);
			putchar(A.a[i][j]);
		}
		cout << endl;
	}
}

void Vehicle::move()
{
	mX--;
}

void Vehicle::erase(int n)
{
	int x = n;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int a = n + j;
			int b = mY + i;
			gotoXY(a, b);
			putchar(' ');
		}
		putchar('\n');
	}
}
