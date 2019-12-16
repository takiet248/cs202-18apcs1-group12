#ifndef _Owl_h_
#define _Owl_h_

#include"Animal.h"
#include<iostream>

using namespace std;
class Owl : public Animal
{
public:
	Owl();
	Owl(int a, int b);
	void display();
};
#endif // !_Owl_h_
#pragma once
