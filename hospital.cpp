#include"hospital.h"
#include <iostream>
#include<cstring>

using namespace std;

Hospital::Hospital() {
	cout << "Default constructor runs for Hospital  " << endl << endl;;
}
Hospital::Hospital(string hId, string hName, string hEmail,string hAddress) {
	hospitalId = hId;
	hospitalName = hName;
	hospitalEmail = hEmail;
	hospitalAddress = hAddress;
}
void Hospital::display() {
	cout << "Hospital Id 		: " << hospitalId << endl;
	cout << "Hospital Name 		: " << hospitalName << endl;
	cout << "Hospital Email 		: " << hospitalEmail << endl;
	cout << "Hospital Address 	: " << hospitalAddress << endl;
}
void Hospital::collectBlood() {

}
void Hospital::verifyDetails() {

}



