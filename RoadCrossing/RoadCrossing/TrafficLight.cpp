#include"TrafficLight.h"

TrafficLight::TrafficLight()
{
	state = 1;
	time = 10;
}

TrafficLight::TrafficLight(int state, int time)
{
	this->state = state;
	this->time = time;
}

int TrafficLight::getState()
{
	return state;
}

int TrafficLight::getTime()
{
	return time;
}

void TrafficLight::change(int newTime)
{
	time--;
	if (time == 0)
	{
		state = 1 - state;
		time = (state ? newTime / 2 : newTime);
	}
}
