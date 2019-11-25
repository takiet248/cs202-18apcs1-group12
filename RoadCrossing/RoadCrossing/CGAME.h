﻿#ifndef _CGAME_H_
#define _CGAME_H_

#include<iostream>
#include"cPeople.h"
#include"Animal.h"
#include"Vehicle.h"
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"console.h"
#include<conio.h>
#include<string>
using namespace std;

class CGAME {
	/*CTRUCK* axt;
	CCAR* axh;
	CDINAUSOR* akl;
	CBIRD* ac;*/
	cPeople* people;
public:
	CGAME(); //Chuẩn bị dữ liệu cho tất cả các đối tượng
	void drawGame(); //Thực hiện vẽ trò chơi ra màn hình sau khi có dữ liệu
	~CGAME(); // Hủy tài nguyên đã cấp phát
	cPeople getPeople();//Lấy thông tin người
	//CVEHICLE* getVehicle();//Lấy danh sách các xe
	//CANIMAL* getAnimal(); //Lấy danh sách các thú
	void resetGame(); // Thực hiện thiết lập lại toàn bộ dữ liệu như lúc đầu
	void exitGame(HANDLE); // Thực hiện thoát Thread
	void startGame(); // Thực hiện bắt đầu vào trò chơi
	void loadGame(istream); // Thực hiện tải lại trò chơi đã lưu
	void saveGame(istream); // Thực hiện lưu lại dữ liệu trò chơi
	//void pauseGame(HANDLE); // Tạm dừng Thread
	//void resumeGame(HANDLE); //Quay lai Thread
	void updatePosPeople(char); //Thực hiện điều khiển di chuyển của CPEOPLE
	void updatePosVehicle(); //Thực hiện cho CTRUCK & CCAR di chuyển
	void updatePosAnimal();//Thực hiện cho CDINAUSOR & CBIRD di chuyển
};
#endif // !_CGAME_H_

