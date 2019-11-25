#include"Vehicle.h"

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
