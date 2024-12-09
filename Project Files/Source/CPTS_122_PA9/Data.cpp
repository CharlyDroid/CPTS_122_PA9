#include "Data.h"

Data::Data() {
	stateNum = 0;
	time = 0.0;
	acceleration = 0.0;
	pressure = 0;
	altitude = 0.0;
	height = 0.0;
	speed = 0.0;
	temperature = 0.0;
	batteryVoltage = 0.0;
	xAcceleration = 0.0;
	yAcceleration = 0.0;
	zAcceleration = 0.0;
	roll = 0.0;
	pitch = 0.0;
	yaw = 0.0;
	globalxAcceleration = 0.0;
	globalyAcceleration = 0.0;
	globalzAcceleration = 0.0;
	globalxPosition = 0.0;
	globalyPosition = 0.0;
	globalzPosition = 0.0;

}

void Data::setState(int var) {
	stateNum = var;
}
void Data::setTime(float var) {
	var = var * 100;
	time = var;
}
void Data::setAcceleration(float var) {
	acceleration = var;
}
void Data::setPressure(int var) {
	pressure = var;
}
void Data::setAltitude(float var) {
	altitude = var;
}
void Data::setHeight(float var) {
	height = var;
}
void Data::setSpeed(float var) {
	speed = var;
}
void Data::setTemperature(float var) {
	temperature = var;
}
void Data::setBatteryVoltage(float var) {
	batteryVoltage = var;
}
void Data::setXAcceleration(float var) {
	xAcceleration = var;
}
void Data::setYAcceleration(float var) {
	yAcceleration = var;
}
void Data::setZAcceleration(float var) {
	zAcceleration = var;
}
void Data::setRoll(float var) {
	roll = var;
}
void Data::setPitch(float var) {
	pitch = var;
}
void Data::setYaw(float var) {
	yaw = var;
}
void Data::setLatitude(float var) {
	latitude = var;
}
void Data::setLongitude(float var) {
	longitude = var;
}
void Data::setGlobalxAcceleration(float var) {
	globalxAcceleration = var;
}
void Data::setGlobalyAcceleration(float var) {
	globalyAcceleration = var;
}
void Data::setGlobalzAcceleration(float var) {
	globalzAcceleration = var;
}
void Data::setGlobalxPosition(float var) {
	globalxPosition = var;
}
void Data::setGlobalyPosition(float var) {
	globalyPosition = var;
}
void Data::setGlobalzPosition(float var) {
	globalzPosition = var;
}




int Data::getState() {
	return  stateNum;
}
float Data::getTime() {
	return time;
}
float Data::getAcceleration() {
	return acceleration;
}
int Data::getPressure() {
	return pressure;
}
float Data::getAltitude() {
	return altitude;
}
float Data::getHeight() {
	return height;
}
float Data::getSpeed() {
	return speed;
}
float Data::getTemperature() {
	return temperature;
}
float Data::getBatteryVoltage() {
	return batteryVoltage;
}
float Data::getXAcceleration() {
	return xAcceleration;
}
float Data::getYAcceleration() {
	return yAcceleration;
}
float Data::getZAcceleration() {
	return zAcceleration;
}
float Data::getRoll() {
	return roll;
}
float Data::getPitch() {
	return pitch;
}
float Data::getYaw() {
	return yaw;
}
float Data::getLatitude() {
	return latitude;
}
float Data::getLongitude() {
	return longitude;
}
float Data::getGlobalxAcceleration() {
	return globalxAcceleration;
}
float Data::getGlobalyAcceleration() {
	return globalyAcceleration;
}
float Data::getGlobalzAcceleration() {
	return globalzAcceleration;
}
float Data::getGlobalxPosition() {
	return globalxPosition;
}
float Data::getGlobalyPosition() {
	return globalyPosition;
}
float Data::getGlobalzPosition() {
	return globalzPosition;
}

