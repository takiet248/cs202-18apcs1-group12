#ifndef _Train_h_
#define _Train_h_

#include"Vehicle.h"
#include<iostream>

using namespace std;

class Train : public Vehicle
{
public:
	Train();
	void display();
};
#endif // !_Train_h_
