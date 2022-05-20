#include <iostream>
#include<cstring>

#include"Guest_User.h"
#include"Inquiry.h"
#include"Registered_Client.h"
#include"System.h"
#include "hospital.h"
#include"doctor.h"
#include "Payment.h"
#include"Blood.h"
#include"Manager.h"
#include"Feedback.h"


int main() {
	Guest_User* g;
	g = new Guest_User(1212, "male", "Ajith Sooriyapala");
	g->display();

  	delete g;
  	
  	Inquiry* i1;
	i1 = new Inquiry(10, "Gabriel Liruki", "Machine", "Dear sir, im having issues regarding .....");
	i1->display();

  	delete i1;
  	
  	Registered_Client* r1;
	r1 = new Registered_Client(1245, "Mandha", "D", "Female");
	r1->display();

 	delete r1;

	System* s1;
	s1 = new System(10, "man", 258525);
	s1->display();

	delete s1;
  
	cout << "Hospital Details" << endl<<endl;
	Hospital* h1;
	h1 = new Hospital("H854", "Hospital ABC", "HospABC@gmail.com", "43,Main Street,Colombo.");
	h1->display();
	
	cout << "Doctor Details" << endl<<endl;
	Doctor* d1;
	d1 = new Doctor("D1056", "Dr.Doofus", "doofus@gmail.com", "555-5784844");
	d1->display();
	
	cout<<"Payment Details"<<endl<<endl;
	Payment* p1;
	p1 = new Payment("b10283","card", 100000);
	p1->display();
	
	cout<<"\n\n";
	
    cout<<"Blood Details"<<endl<<endl;
	blood* b1;
	b1 = new blood("h583", "o-", 134, 52);
    b1->display();
    
    Manager* m1;
	m1 = new Manager(1245, "Wimal Sooriyapala");
	m1->display();

	delete m1;

	Feedback *f;
	f=new Feedback(1212,"online","Great service", "Luraki");
	f->	display();
	
	delete f;


	return 0;
}
