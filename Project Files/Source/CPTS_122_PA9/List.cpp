#include "List.h"


List::List() {
	//cout << "Constructor is being called" << endl;
	headPtr = nullptr;
}
void List::insert(Data* dataPtr) {
	Node* insertNode = new Node(dataPtr);
	if (headPtr != nullptr) {
		insertNode->setNextPtr(headPtr);
		headPtr = insertNode;
	}
	else {
		headPtr = insertNode;
	}
}

Data* List::remove() {
	Data* tempData = headPtr->getData();
	Node* tempNode = headPtr;
	if (headPtr != nullptr) {
		headPtr = headPtr->getNextPtr();
	}
	else {
		//cout << "List is empty. Cannot dequeue." << endl;
	}
	delete(tempNode);
	return tempData;
}

/*
 * Recursive print function to print in-order
 */

void List::printList() {
	printListHelper(headPtr);
}

Data* List::GetDataAtTime(int time)
{
	Node* pCur = headPtr;
	bool found = false;
	Data* returnVal = nullptr;

	while (pCur != nullptr && !found)
	{
		if (time == pCur->getData()->getTime())
		{
			found = true;
			returnVal = pCur->getData();
		}
		pCur = pCur->getNextPtr();
	}

	return returnVal;
}

void List::LoadList(std::stringstream &inputStream)
{
		string line = "";
		int location;
		float time = 0.0; // E-5 column 
		int stateNum = 0; //F-6
		float acceleration = 0.0;//H-8
		int pressure = 0; //I-9
		float altitude = 0.0; //J-10
		float height = 0.0; //K-11
		float speed = 0.0; //L-12
		float temperature = 0.0; //M-13
		float batteryVoltage = 0.0; //P-16
		float xAcceleration = 0.0; //Q-17
		float yAcceleration = 0.0; //R-18
		float zAcceleration = 0.0; //S-19
		float roll = 0.0; //T-20
		float pitch = 0.0; //U-21
		float yaw = 0.0; //V-22
		float latitude = 0.0; //Col: 35
		float longitude = 0.0; // Col: 36
		getline(inputStream, line); //discard header line
		//cout <<"time\nstateNum\nAccel\npressure\naltitude\nheight\nspeed\ntemp\nbattery\nxacc\nyacc\nzacc\nroll\npitch\nyaw\n\n";
		while (getline(inputStream, line)) {
			Data* read = new Data();
			for (int i = 1; i <= 36; i++) {
				//cout << i << endl;
				location = line.find(',');
				switch (i) { // each number corresponds to letter of alphabet, which corresponds to column in CSV.

				case 5:
					read->setTime(stof(line.substr(0, location)));
					//cout << read->time << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 6:
					read->setState(stoi(line.substr(0, location)));
					//cout << read->stateNum << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 8:
					read->setAcceleration(stof(line.substr(0, location)));
					//cout << read->acceleration << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 9:
					read->setPressure(stoi(line.substr(0, location)));
					//cout << read->pressure << ", ";
					line = line.substr(location + 1, line.length());
					break;

				case 10:
					read->setAltitude(stof(line.substr(0, location)));
					//cout << read->altitude << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 11:
					read->setHeight(stof(line.substr(0, location)));
					//cout << read->height << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 12:
					read->setSpeed(stof(line.substr(0, location)));
					//cout << read->speed << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 13:
					read->setTemperature(stof(line.substr(0, location)));
					//cout << read->temperature << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 16:
					read->setBatteryVoltage(stof(line.substr(0, location)));
					//cout << read->batteryVoltage << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 17:
					read->setXAcceleration(stof(line.substr(0, location)));
					//cout << read->xAcceleration << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 18:
					read->setYAcceleration(stof(line.substr(0, location)));
					//cout << read->yAcceleration << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 19:
					read->setZAcceleration(stof(line.substr(0, location)));
					//cout << read->zAcceleration << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 20:
					read->setRoll(stof(line.substr(0, location)));
					//cout << read->roll << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 21:
					read->setPitch(stof(line.substr(0, location)));
					//cout << read->pitch << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 22:
					read->setYaw(stof(line.substr(0, location)));
					//cout << read->yaw << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 35:
					read->setLatitude(stof(line.substr(0, location)));
					//cout << read->yaw << ", ";
					line = line.substr(location + 1, line.length());
					break;
				case 36:
					read->setLongitude(stof(line.substr(0, location)));
					//cout << read->yaw << ", ";
					line = line.substr(location + 1, line.length());
					break;
				default:
					line = line.substr(location + 1, line.length());
					break;
				};
			}
			//cout << endl;
			this->insert(read);
		}
}

int List::getMaxTime() {
	return getMaxTimeHelper(headPtr);
}

int List::getMaxTimeHelper(Node* hPtr) {
	if (hPtr != nullptr)
	{
		return hPtr->getData()->getTime();
	}
	return 0;
}

void List::printListHelper(Node* hPtr) {
	if (hPtr != nullptr) {
		printListHelper(hPtr->getNextPtr());
		Data* read = hPtr->getData();
		cout << read->getTime() << ", ";
		cout << read->getState() << ", ";
		cout << read->getAcceleration() << ", ";
		cout << read->getPressure() << ", ";
		cout << read->getAltitude() << ", ";
		cout << read->getHeight() << ", ";
		cout << read->getSpeed() << ", ";
		cout << read->getTemperature() << ", ";
		cout << read->getBatteryVoltage() << ", ";
		cout << read->getXAcceleration() << ", ";
		cout << read->getYAcceleration() << ", ";
		cout << read->getZAcceleration() << ", ";
		cout << read->getRoll() << ", ";
		cout << read->getPitch() << ", ";
		cout << read->getYaw() << ", ";
		cout << endl;
	}
}
Node* List::getHead() {
	return headPtr;
}