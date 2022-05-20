#pragma once

#include <iostream>
#include<cstring>

using namespace std;

class Doctor{
protected:
	string doctorId;
	string doctorName;
	string docEmail;
	string contactNumber;

public:
	Doctor();
	Doctor(string docId, string dName, string dEmail, string cNumber);
	void display();
	void collectBlood();
	void consultRegisterClient();
};
