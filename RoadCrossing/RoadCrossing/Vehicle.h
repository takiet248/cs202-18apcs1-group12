#ifndef _Vehicle_h_
#define _Vehicle_h_

#include<iostream>
#include"console.h"


using namespace std;

struct vShape
{
	char a[4][8];
};
class Vehicle
{
protected:
	vShape A;
	int mX, mY;
public:
	//Vehicle();
	virtual void display();
	
};
#endif // !_Vehicle_h_

