#include<iostream>
using namespace std;

class blood{
	private:
		string bloodID;
		string bloodType;
		int bloodAmount;
		int bloodquentity;
		
	public:
		blood();
		blood(string bID,string bType,int bAmount,int bquentity);
		void display();
		void searchblood();
		
};