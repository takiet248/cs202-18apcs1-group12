#include"cPeople.h"
#include"console.h"

cPeople::cPeople()
{
	mX = 55;
	mY = 31;
	mState = true;

	A.a[0][0] = A.a[0][4] = A.a[1][3] = A.a[1][4] = ' ';
	A.a[2][0] = A.a[2][1] = A.a[2][4] = ' ';
	A.a[3][0] = A.a[3][2] = A.a[3][3] = ' ';
	A.a[0][1] = '0';
	A.a[0][2] = A.a[1][0] = '_';
	A.a[0][3] = A.a[1][2] = A.a[2][3] = A.a[3][4] = '\\';
	A.a[1][1] = A.a[2][2] = '/';
	A.a[3][1] = '|';
	color = 15;

}

void cPeople::display()
{
	TextColor(color);
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
	}
}

void cPeople::Up(int x)
{
	if (mY > 1)
		mY -= x;
}

void cPeople::Down(int x)
{
	if (mY < 31)
		mY += x;
}

void cPeople::Left(int x)
{
	if (mX > 1)
		mX -= x;
}

void cPeople::Right(int x)
{
	if (mX < 103)
		mX += x;
}

bool cPeople::isFinish()
{
	if (mY == 1)
		return true;
	else
		return false;
}

bool cPeople::isDead()
{
	return !mState;
}

void cPeople::yClear(int m)
{
	int y = m;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int a = mX + j;
			int b = m + i;
			gotoXY(a, b);
			putchar(' ');
		}
	}
}

int cPeople::getX()
{
	return mX;
}

int cPeople::getY()
{
	return mY;
}

void cPeople::setPos(int a, int b)
{
	this->mX = a;
	this->mY = b;
}

void cPeople::xClear(int m)       
{
	int x = m;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				int a = m + j;
				int b = mY + i;
				gotoXY(a, b);
				putchar(' ');
			}
		}
}

bool cPeople::isImpactWAnimal(vector<Animal*> VA)
{
	for (unsigned int i = 0; i < VA.size(); ++i)
	{
		if (mX <= VA[i]->getX()+4  && mX >= VA[i]->getX()-5 && mY == VA[i]->getY())
		{
			A.a[0][1] = '0';
			A.a[0][2] = '_';
			A.a[0][3] = A.a[0][4] = A.a[1][0] = A.a[1][1] = A.a[1][4] = ' ';
			A.a[0][0] = A.a[1][2] = A.a[2][3] = '\\';
			A.a[2][0] = A.a[2][1] = ' ';
			A.a[2][2] = A.a[2][4] = '/';
			A.a[1][3] = '|';
			A.a[3][2] = '\\';
			A.a[3][0] = A.a[3][1] = A.a[3][3] = A.a[3][4] = ' ';
			color = 4;
			display();
			mState = false;
			return true;
		}
	}
	return false;
}

bool cPeople::isImpactWVehicle(vector<Vehicle*> VV)
{
	for (unsigned int i = 0; i < VV.size(); ++i)
	{
		if (mX <= VV[i]->getX() + 8 && mX >= VV[i]->getX() - 4 && mY == VV[i]->getY())
		{
			A.a[0][1] = '0';
			A.a[0][2] = '_';
			A.a[0][3] = A.a[0][4] = A.a[1][0] = A.a[1][1] = A.a[1][4] = ' ';
			A.a[0][0] = A.a[1][2] = A.a[2][3] = '\\';
			A.a[2][0] = A.a[2][1] = ' ';
			A.a[2][2] = A.a[2][4] = '/';
			A.a[1][3] = '|';
			A.a[3][2] = '\\';
			A.a[3][0] = A.a[3][1] = A.a[3][3] = A.a[3][4] = ' ';
			color = 4;
			display();
			mState = false;
			return true;
		}
	}
	return false;
}

void cPeople::reset()
{
	mX = 55;
	mY = 31;
	mState = true;
	A.a[0][0] = A.a[0][4] = A.a[1][3] = A.a[1][4] = ' ';
	A.a[2][0] = A.a[2][1] = A.a[2][4] = ' ';
	A.a[3][0] = A.a[3][2] = A.a[3][3] = ' ';
	A.a[0][1] = '0';
	A.a[0][2] = A.a[1][0] = '_';
	A.a[0][3] = A.a[1][2] = A.a[2][3] = A.a[3][4] = '\\';
	A.a[1][1] = A.a[2][2] = '/';
	A.a[3][1] = '|';
	color = 15;
}
