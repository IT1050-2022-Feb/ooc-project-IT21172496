#include<iostream>
#include<cstring>

using namespace std;

class Feedback{
	protected:
	int	feedbackId;
	char feedbackType[20];
	char description[200];
	char username[20];
	public:
	Feedback();
	Feedback(int fID, char fT[], char fD[], char uN[]);
	void display();
	void getdescription();
};
Feedback::Feedback(){}

Feedback::Feedback(int fID, char fT[], char fD[], char uN[]){
	feedbackId = fID;
	strcpy(feedbackType,fT);
	strcpy(description,fD);
	strcpy(username,uN);
}
void Feedback::	display(){
	
	cout<<"The Feed Back id would be : "<<feedbackId<<endl;
	cout<<"The Feed Back Type would be : "<<feedbackType<<endl;
	cout<<"The Feed Back description would be : "<<description<<endl;
	cout<<"The Feed Back username would be : "<<username<<endl;
}
void Feedback::getdescription(){}

int main (){
	Feedback *f;
	f=new Feedback(1212,"online","Great service", "Luraki");
	f->	display();
	
	delete f;
	
	return 0;
}