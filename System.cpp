#include "System.h"
#include<iostream>
#include<cstring>

using namespace std;

System::System() {
	cout << "Default constructor runs for System  " << endl << endl;;
}
System::System(int sID, char sType[], int sContact) {
	systemid = sID;
	strcpy(systemType, sType);
	contact = sContact;
}
void System::display() {
	cout << "System Id Would be " << systemid << endl;
  cout << "System type would be " << systemType <<endl;
  cout << "The contact would be " << contact << endl << endl << endl;
}
void System::modifyPassword() {

}
void System::getFeedback() {

}