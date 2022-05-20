#pragma once

class System {
protected:
	int systemid;
	char systemType[10];
	int contact;
public:
	System();
	System(int sID, char sType[], int sContact);
	virtual void display();
	void modifyPassword();
	void getFeedback();
};

