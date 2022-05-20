#include<iostream>
#include<cstring>
#include "Payment.h"

using namespace std;

Payment::Payment(){
	cout << "Default constructor runs for Payment " << endl << endl;;
}
Payment::Payment(string pID, char pMethod[], int pAmount) {
	paymentID = pID;
	strcpy(paymentMethod,pMethod);
	paymentAmount = pAmount;
}
void Payment::display() {
	cout << "The payment id would be : " << paymentID << endl;
	cout << "The payment method would be : " << paymentMethod << endl;
	cout << "The payment amount would be : " << paymentAmount << endl;
}
void Payment::collectPayment() {

}