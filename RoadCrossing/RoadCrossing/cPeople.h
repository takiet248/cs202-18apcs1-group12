#ifndef _cPeople_h_
#define _cPeople_h_

#include<iostream>
#include"console.h"
using namespace std;

struct Pshape 
{
	char a[4][5];
};

class cPeople
{
private:
	Pshape A;
	int mX, mY;
	bool mState;
public:
	cPeople();
	void show();
	void display();
	void Up(int x);
	void Down(int x);
	void Left(int x);
	void Right(int x);
	bool isDead();
};
#endif // !_cPeople_h_
