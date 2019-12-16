#ifndef _Ship_h_
#define _Ship_h_

#include"Vehicle.h"
#include<iostream>

using namespace std;

class Ship : public Vehicle
{
public:
	Ship();
	Ship(int a, int b);
	void display();
};
#endif // !_Ship_h_

