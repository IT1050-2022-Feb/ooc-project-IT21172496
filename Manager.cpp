#include"Manager.h"
#include<cstring>
#include<iostream>

using namespace std;

Manager::Manager(){
  managerId = 0;
}
Manager::Manager(int mID, char mName[]){
  managerId=mID;
  strcpy(managerName,mName);
}
void Manager::display(){
  cout<<"The Manager Id would be : "<<managerId<<endl;
  cout<<"The Manager name would be :"<<managerName<<endl;
}
void Manager::collectPayment(){}

Manager::~Manager(){}
