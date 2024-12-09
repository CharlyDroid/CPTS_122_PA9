#pragma once
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::istream;
using std::ostream;
using std::to_string;


class Data
{
private:
	int stateNum; //F
	int time; // E column
	float acceleration;//H
	int pressure; //I
	float altitude; //J
	float height; //K
	float speed; //L
	float temperature; //M
	float batteryVoltage; //P
	float xAcceleration; //Q
	float yAcceleration; //R
	float zAcceleration; //S
	float roll; //T
	float pitch; //U
	float yaw; //V
	float latitude;
	float longitude;
	float globalxAcceleration;
	float globalyAcceleration;
	float globalzAcceleration;
	float globalxPosition;
	float globalyPosition;
	float globalzPosition;


public:
	Data();
	void setState(int var);
	void setTime(float var);
	void setAcceleration(float var);
	void setPressure(int var);
	void setAltitude(float var);
	void setHeight(float var);
	void setSpeed(float var);
	void setTemperature(float var);
	void setBatteryVoltage(float var);
	void setXAcceleration(float var);
	void setYAcceleration(float var);
	void setZAcceleration(float var);
	void setRoll(float var);
	void setPitch(float var);
	void setYaw(float var);
	void setLatitude(float var);
	void setLongitude(float var);
	void setGlobalxAcceleration(float var);
	void setGlobalyAcceleration(float var);
	void setGlobalzAcceleration(float var);
	void setGlobalxPosition(float var);
	void setGlobalyPosition(float var);
	void setGlobalzPosition(float var);



	int getState();
	float getTime();
	float getAcceleration();
	int getPressure();
	float getAltitude();
	float getHeight();
	float getSpeed();
	float getTemperature();
	float getBatteryVoltage();
	float getXAcceleration();
	float getYAcceleration();
	float getZAcceleration();
	float getRoll();
	float getPitch();
	float getYaw();
	float getLatitude();
	float getLongitude();
	float getGlobalxAcceleration();
	float getGlobalyAcceleration();
	float getGlobalzAcceleration();
	float getGlobalxPosition();
	float getGlobalyPosition();
	float getGlobalzPosition();
};

