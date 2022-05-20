#include<iostream>
using namespace std;

class Payment{
	private:
		string paymentID;
		char paymentMethod[90];
		int paymentAmount;
		
   public:
         Payment();
		 Payment(string pID, char pMethod[], int pAmount);   	
         void display();
		 void collectPayment(); 
		 
};