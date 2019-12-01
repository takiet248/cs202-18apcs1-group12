#include"cPeople.h"
#include"console.h"

cPeople::cPeople()
{
	mX = 55;
	mY = 31;
	A.a[0][0] = A.a[0][4] = A.a[1][3] = A.a[1][4] = ' ';
	A.a[2][0] = A.a[2][1] = A.a[2][4] = ' ';
	A.a[3][0] = A.a[3][2] = A.a[3][3] = ' ';
	A.a[0][1] = '0';
	A.a[0][2] = A.a[1][0] = '_';
	A.a[0][3] = A.a[1][2] = A.a[2][3] = A.a[3][4] = '\\';
	A.a[1][1] = A.a[2][2] = '/';
	A.a[3][1] = '|';
	mState = true;
}

void cPeople::show()
{
	cout << mX << endl;
	cout << mY << endl;
}

void cPeople::display()
{
	int a, b;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a = mX + j;
			b = mY + i;
			gotoXY(a, b);
			putchar(A.a[i][j]);
		}
		cout << endl;
	}
}

void cPeople::Up(int x)
{
	mY -= x;
}

void cPeople::Down(int x)
{
	mY += x;
}

void cPeople::Left(int x)
{
	mX -= x;
}

void cPeople::Right(int x)
{
	mX += x;
}

bool cPeople::isDead()
{
	if (mState == false)
		return true;
	else
		return true;
}