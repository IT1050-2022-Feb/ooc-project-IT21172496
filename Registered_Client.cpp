#include"Registered_Client.h"
#include<iostream>
#include<cstring>

using namespace std;


Registered_Client::Registered_Client() {
	cout << "Default constructor runs for the Registered " << endl;
}
Registered_Client::Registered_Client(int cId, char n[], char cT[], char sX[]) {
	clientId = cId;
	strcpy(name, n);
	strcpy(clientType, cT);
	strcpy(sex, sX);
}
void Registered_Client::display() {
	cout << "The client id would be : " << clientId << endl;
	cout << "The name of the client would be : " << name << endl;
	cout << "The type of the client (Donar - D / Reciever - R ) would be : " << clientType << endl;
	cout << "The gender of the client would be : " << sex << endl;
}
void Registered_Client::getUserDetails() {

}
void Registered_Client::updateDetails() {

};