﻿#include"SplashScreen.h"

/*void printSplashScreen()
{
	cout << "_///////     _////        _/      _/////              _//  _///////     _////     _// //   _// // _/_///     _//  _////   " << endl;
	cout << "_//    _// _//    _//    _/ //    _//   _//        _//   _/_//    _// _//    _//_//    _/_//    _/_/_/ _//   _//_/    _// " << endl;
	cout << "_//    _/_//        _// _/  _//   _//    _//      _//      _//    _/_//        _/_//      _//     _/_// _//  _/_//        " << endl;
	cout << "_/ _//   _//        _//_//   _//  _//    _//      _//      _/ _//   _//        _// _//      _//   _/_//  _// _/_//        " << endl;
	cout << "_//  _// _//        _/_////// _// _//    _//      _//      _//  _// _//        _//    _//      _//_/_//   _/ _/_//   _////" << endl;
	cout << "_//    _// _//     _/_//       _//_//   _//        _//   _/_//    _// _//     _/_//    _/_//    _/_/_//    _/ //_//    _/ " << endl;
	cout << "_//      _// _////  _//         _/_/////             _//// _//      _// _////     _// //   _// // _/_//      _// _/////   " << endl;
}*/

void printRoad()
{
	int a = 38, b = 2, c = 200;
	gotoXY(a, b);
	TextColor(15);
	Sleep(c);
	cout << "____/\\\\\\\\\\\\\\\\\\\\__________/\\\\\\\\\\__________/\\\\\\\\\\\\\\\\\\_____/\\\\\\\\\\\\\\\\\\\\\\\\____" << endl;
	gotoXY(a, b + 1);
	TextColor(9);
	Sleep(c);
	cout << " __/\\\\\\///////\\\\\\______/\\\\\\///\\\\\\______/\\\\\\\\\\\\\\\\\\\\\\\\\\__\\/\\\\\\////////\\\\\\___" << endl;
	gotoXY(a, b + 2);
	TextColor(10);
	Sleep(c);
	cout << "  _\\/\\\\\\_____\\/\\\\\\____/\\\\\\/__\\///\\\\\\___/\\\\\\/////////\\\\\\_\\/\\\\\\______\\//\\\\\\__" << endl;
	gotoXY(a, b + 3);
	TextColor(11);
	Sleep(c);
	cout << "   _\\/\\\\\\\\\\\\\\\\\\\\\\/____/\\\\\\______\\//\\\\\\_\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\_______\\/\\\\\\__" << endl;
	gotoXY(a, b + 4);
	TextColor(12);
	Sleep(c);
	cout << "    _\\/\\\\\\//////\\\\\\___\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\_\\/\\\\\\_______\\/\\\\\\__" << endl;
	gotoXY(a, b + 5);
	TextColor(13);
	Sleep(c);
	cout << "     _\\/\\\\\\____\\//\\\\\\__\\//\\\\\\______/\\\\\\__\\/\\\\\\/////////\\\\\\_\\/\\\\\\_______\\/\\\\\\__" << endl;
	gotoXY(a, b + 6);
	TextColor(14);
	Sleep(c);
	cout << "      _\\/\\\\\\_____\\//\\\\\\__\\///\\\\\\__/\\\\\\____\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\_______/\\\\\\___" << endl;
	gotoXY(a, b + 7);
	TextColor(15);
	Sleep(c);
	cout << "       _\\/\\\\\\______\\//\\\\\\___\\///\\\\\\\\\\/_____\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\\\\\\\\\\\\\\\\\\\/____" << endl;
	gotoXY(a, b + 8);
	TextColor(8);
	Sleep(c);
	cout << "        _\\///________\\///______\\/////_______\\///________\\///__\\////////////______" << endl;
	
}

void printCrossing()
{
	int a = 14, b = 13, c = 200;
	gotoXY(a, b);
	TextColor(15);
	Sleep(c);
	cout << "________/\\\\\\\\\\\\\\\\\\____/\\\\\\\\\\\\\\\\\\___________/\\\\\\\\\\__________/\\\\\\\\\\\\\\\\\\\\\\____/\\\\\\\\\\\\\\\\\\\\\\__/\\\\\\\\\\_____/\\\\\\_____/\\\\\\\\\\\\\\\\\\\\\\\\_" << endl;
	gotoXY(a, b + 1);
	TextColor(9);
	Sleep(c);
	cout << " _____/\\\\\\////////___/\\\\\\///////\\\\\\_______/\\\\\\///\\\\\\______/\\\\\\/////////\\\\\\_\\/////\\\\\\///__\\/\\\\\\\\\\\\___\\/\\\\\\___/\\\\\\//////////__" << endl;
	gotoXY(a, b + 2);
	TextColor(10);
	Sleep(c);
	cout << "  ___/\\\\\\/___________\\/\\\\\\_____\\/\\\\\\_____/\\\\\\/__\\///\\\\\\___\\//\\\\\\______\\///______\\/\\\\\\_____\\/\\\\\\/\\\\\\__\\/\\\\\\__/\\\\\\_____________" << endl;
	gotoXY(a, b + 3);
	TextColor(11);
	Sleep(c);
	cout << "   __/\\\\\\_____________\\/\\\\\\\\\\\\\\\\\\\\\\/_____/\\\\\\______\\//\\\\\\___\\////\\\\\\_____________\\/\\\\\\_____\\/\\\\\\//\\\\\\_\\/\\\\\\_\\/\\\\\\____/\\\\\\\\\\\\\\_" << endl;
	gotoXY(a, b + 4);
	TextColor(12);
	Sleep(c);
	cout << "    _\\/\\\\\\_____________\\/\\\\\\//////\\\\\\____\\/\\\\\\_______\\/\\\\\\______\\////\\\\\\__________\\/\\\\\\_____\\/\\\\\\\\//\\\\\\\\/\\\\\\_\\/\\\\\\___\\/////\\\\\\_" << endl;
	gotoXY(a, b + 5);
	TextColor(13);
	Sleep(c);
	cout << "     _\\//\\\\\\____________\\/\\\\\\____\\//\\\\\\___\\//\\\\\\______/\\\\\\__________\\////\\\\\\_______\\/\\\\\\_____\\/\\\\\\_\\//\\\\\\/\\\\\\_\\/\\\\\\_______\\/\\\\\\_" << endl;
	gotoXY(a, b + 6);
	TextColor(14);
	Sleep(c);
	cout << "      __\\///\\\\\\__________\\/\\\\\\_____\\//\\\\\\___\\///\\\\\\__/\\\\\\_____/\\\\\\______\\//\\\\\\______\\/\\\\\\_____\\/\\\\\\__\\//\\\\\\\\\\\\_\\/\\\\\\_______\\/\\\\\\_" << endl;
	gotoXY(a, b + 7);
	TextColor(15);
	Sleep(c);
	cout << "       ____\\////\\\\\\\\\\\\\\\\\\_\\/\\\\\\______\\//\\\\\\____\\///\\\\\\\\\\/_____\\///\\\\\\\\\\\\\\\\\\\\\\/____/\\\\\\\\\\\\\\\\\\\\\\_\\/\\\\\\___\\//\\\\\\\\\\_\\//\\\\\\\\\\\\\\\\\\\\\\\\/__" << endl;
	gotoXY(a, b + 8);
	TextColor(8);
	Sleep(c);
	cout << "        _______\\/////////__\\///________\\///_______\\/////_________\\///////////_____\\///////////__\\///_____\\/////___\\////////////____" << endl;
}

void memberName()
{
	Sleep(200);
	TextColor(15);
	int a = 24;
	gotoXY(75, a);
	cout << "DESIGNED BY" << endl; 
	gotoXY(74, a + 1);
	cout << "Tran Anh Kiet" << endl;
	gotoXY(74, a + 2);
	cout << "Luu Quoc Doan" << endl;
	gotoXY(71, a + 3);
	cout << "Nguyen Tran Quang Duy" << endl;
}

void splashScreen()
{
	PlaySound(TEXT("Opening.wav"), NULL, SND_ASYNC | SND_LOOP);
	printRoad();
	printCrossing();
	memberName();
	Sleep(2000);
	system("cls");
}


