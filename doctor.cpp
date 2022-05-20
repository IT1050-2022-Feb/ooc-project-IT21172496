#include"doctor.h"
#include <iostream>
#include<cstring>

using namespace std;


Doctor::Doctor() {
	cout << "The default constructor runs for Doctor" << endl << endl;;
}
Doctor::Doctor(string dId, string dName, string dEmail, string cNumber) {
	doctorId = dId;
	doctorName = dName;
	docEmail = dEmail;
	contactNumber = cNumber;
}
void Doctor::display() {
	cout << "Doctor Id		: " << doctorId << endl;
	cout << "Doctor Name 	 	: " << doctorName << endl;
	cout << "Doctor Email 	 	: " << docEmail << endl;
	cout << "Contact Number		: " << contactNumber << endl;
}

void Doctor::collectBlood() {

}
void Doctor::consultRegisterClient() {

};

