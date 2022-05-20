#pragma once

#include <iostream>
#include<cstring>

using namespace std;

class Hospital {
protected:
	string hospitalId;
	string hospitalName;
	string hospitalEmail;
	string hospitalAddress;
public:
	Hospital();
	Hospital(string hId, string hName, string email,string address);
	void display();
	void collectBlood();
	void verifyDetails();
};

