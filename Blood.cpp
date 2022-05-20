#include<iostream>
#include<cstring>
#include"Blood.h"

using namespace std;

blood::blood() {
	cout << "Default constructor runs for the blood" << endl;
}
blood::blood(string bID,string bType,int bAmount,int bquentity) {
	bloodID = bID;
	bloodType = bType;
	bloodAmount=bAmount;
	bloodquentity=bquentity;
}

void blood ::display() {
	cout << "The id of the blood would be : " << bloodID << endl;
	cout << "The Type would be : " << bloodType << endl;
	cout << "The blood amount would be :" << bloodAmount << endl;
	cout << "The blood quentity would be :" << bloodquentity << endl;
}
void blood::searchblood() {

};