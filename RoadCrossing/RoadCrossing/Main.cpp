#include"cPeople.h"
#include"console.h"
#include"Draw.h"
#include"CGAME.h"
#include"Ship.h"

int main()
{
	cPeople meow;
	printFrame();
	meow.display();
	
	gotoXY(0, 40);
	return 0;
}