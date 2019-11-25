#ifndef _Animal_h_
#define _Animal_h_

#include<iostream>
#include"CGAME.h"


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
	virtual void display();
	//Animal();
};
#endif // !_Animal_h_
