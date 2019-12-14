#ifndef _CGAME_H_
#define _CGAME_H_

#include<iostream>
#include<vector>
#include<deque>
#include"cPeople.h"
#include"Animal.h"
#include"Vehicle.h"
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"console.h"
#include<conio.h>
#include<string>
#include"Bear.h"
#include"Owl.h"
#include"Ship.h"
#include"Train.h"
#include<thread>
#include"TrafficLight.h"
#include"Draw.h"
#include<mmsystem.h>
#include<fstream>
#include"Menu.h"
#include"SplashScreen.h"
using namespace std;

class CGAME
{
private:
	deque<Bear> VB;
	deque<Owl> VO;
	deque<Ship> VS;
	deque<Train> VT;
	cPeople* player;
	TrafficLight* lights;
	int speed;
	unsigned int curVN;
	unsigned int curAN;
	int level;
	bool finalw;
	bool run;
public:
	bool init = true;
	CGAME(); //Chuẩn bị dữ liệu cho tất cả các đối tượng
	void drawGame(); //Thực hiện vẽ trò chơi ra màn hình sau khi có dữ liệu
	~CGAME(); // Hủy tài nguyên đã cấp phát
	cPeople* getPeople();//Lấy thông tin người
	vector<Vehicle*>getVehicle();
	vector<Animal*> getAnimal();
	int Menu();
	void deallocate();
	void resetGame(); // Thực hiện thiết lập lại toàn bộ dữ liệu như lúc đầu
	void exitGame(HANDLE handle_); // Thực hiện thoát Thread
	void pauseGame(HANDLE handle_);
	void resumeGame(HANDLE handle_);
	void startGame(); // Thực hiện bắt đầu vào trò chơi
	void loadGame(istream); // Thực hiện tải lại trò chơi đã lưu
	void saveGame(string fileName); // Thực hiện lưu lại dữ liệu trò chơi
	void updatePosPeople(char key); //Thực hiện điều khiển di chuyển của CPEOPLE
	void updatePosVehicle(); //Thực hiện cho CTRUCK & CCAR di chuyển
	void updatePosTrain();
	void updatePosShip();
	void updatePosAnimal();//Thực hiện cho CDINAUSOR & CBIRD di chuyển
	void updatePosBear();
	void updatePosOwl();
	void printTrafficLights();
	void printLevel();
	void win();
	void lose();
	void levelUp();
	int getSpeed();
	void finalWin();
	bool isFW();
	bool isRunning();
};
#endif // !_CGAME_H_

