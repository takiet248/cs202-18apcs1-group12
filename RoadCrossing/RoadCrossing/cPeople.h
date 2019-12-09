#ifndef _cPeople_h_
#define _cPeople_h_

#include<iostream>
#include"console.h"
#include<vector>
#include"Bear.h"
#include"Owl.h"
#include"Train.h"
#include"Ship.h"
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
	bool mState = true;
public:
	cPeople();
	void show();
	void display();
	void Up(int x);
	void Down(int x);
	void Left(int x);
	void Right(int x);

	void xClear(int m);
	void yClear(int m);
	int getX();
	int getY();
	//__________________________________________
	bool isFinish();
	bool isDead();
	bool isImpactWAnimal(vector<Animal*> VA);
	bool isImpactWVehicle(vector<Vehicle*> VV);
};
#endif // !_cPeople_h_
