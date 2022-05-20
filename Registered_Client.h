
class Registered_Client {
protected:
	int clientId;
	char name[20];
	char clientType[10];
	char sex[6];
public:
	Registered_Client();
	Registered_Client(int cId, char n[], char cT[], char sX[]);
	void display();
	void getUserDetails();
	void updateDetails();
};