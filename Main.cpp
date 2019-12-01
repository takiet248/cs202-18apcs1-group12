#include"cPeople.h"
#include"console.h"
#include"Draw.h"
#include"CGAME.h"
#include"Ship.h"
#include"Owl.h"
#include"Bear.h"
#include<thread>
int main()
{
	printFrame();
	CGAME cg;
	while (true)
	{
		cg.updatePosAnimal();
		Sleep(100);
	}
	gotoXY(0, 40);
	return 0;
}