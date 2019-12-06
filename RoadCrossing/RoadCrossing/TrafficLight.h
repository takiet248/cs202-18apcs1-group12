#ifndef _TrafficLight_h_
#define _TrafficLight_h_

#include<iostream>
#include<Windows.h>
using namespace std;

class TrafficLight
{
private:
	int state, time;
public:
	TrafficLight();
	TrafficLight(int state, int time);
	int getState();
	int getTime();
	void change(int newTime);
};
#endif // !_TrafficLight_h_
