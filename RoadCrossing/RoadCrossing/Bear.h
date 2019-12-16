#ifndef _Bear_h_
#define _Bear_h_

#include<iostream>
#include"Animal.h"

using namespace std;
class Bear : public Animal
{
public:
	Bear();
	Bear(int a, int b);
	void display();
};
#endif // !_Bear_h_
