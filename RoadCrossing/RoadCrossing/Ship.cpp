#include"Ship.h"

Ship::Ship()
{
	mX = 1;
	mY = 19;
	A.a[0][3] = A.a[1][3] = A.a[2][3] = '|';
	A.a[1][2] = A.a[1][4] = A.a[2][0] = A.a[2][1] = A.a[2][2]
		= A.a[2][4] = A.a[2][5] = A.a[2][6] = A.a[3][1] = A.a[3][3] = A.a[3][5] = '_';
	A.a[3][2] = A.a[3][4] = 'o';
	A.a[0][2] = A.a[1][1] = A.a[3][6] = '/';
	A.a[0][4] = A.a[1][5] = A.a[3][0] = '\\';
	A.a[0][0] = A.a[0][1] = A.a[0][5] = A.a[0][6] = A.a[1][0] = A.a[1][6] = ' ';
	A.a[0][7] = A.a[1][7] = A.a[2][7] = A.a[3][7] = ' ';
}

void Ship::display()
{
	Vehicle::display();
}
