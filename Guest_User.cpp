#include"Guest_User.h"
#include<iostream>
#include<cstring>

using namespace std;

Guest_User::Guest_User() {
	cout << "Default constructor runs for the guest user" << endl;
}
Guest_User::Guest_User(int gID, char sX[], char N[]) {
	guestId = gID;
	strcpy(sex, sX);
	strcpy(Name, N);
}

void Guest_User::display() {
	cout << "The name of the guest would be : " << Name << endl;
	cout << "The gender would be : " << sex << endl;
	cout << "The guest-id would be :" << guestId << endl;
}
void Guest_User::storeInformation() {

};