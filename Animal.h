#ifndef _Animal_h_
#define _Animal_h_

#include<iostream>
#include"console.h"
//#include"CGAME.h"


using namespace std;

struct aShape
{
	char a[4][5];
};

class Animal
{
protected:
	int mX, mY;
	aShape A;
public:
	int getX();
	int getY();
	virtual void display();
	virtual void move();
	virtual void erase(int n);
	//Animal();
};
#endif // !_Animal_h_
