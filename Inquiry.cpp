#include<iostream>
#include<cstring>
#include"Inquiry.h"

using namespace std;

Inquiry::Inquiry() {
	cout << "The default constructor runsfor Inquiry" << endl << endl;;
}
Inquiry::Inquiry(int iID, char n[], char iT[], char d[]) {
	inquiryId = iID;
	strcpy(name, n);
	strcpy(inquiryType, iT);
	strcpy(description, d);
}
void Inquiry::display() {
	cout << "Dear customer the entered details are of below" << endl;
	cout << "Inquiry Id : " << inquiryId << endl;
	cout << "Name would be :" << name << endl;
	cout << "Type would be :" << inquiryType << endl;
	cout << endl;
	cout << "Description :" << description << endl;
}
void Inquiry::respondInquiries() {

}
void Inquiry::updateInquiries() {

};