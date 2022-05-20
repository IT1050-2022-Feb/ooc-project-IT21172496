
class Guest_User {
protected:
	int guestId;
	char sex[6];
	char Name[20];
public:
	Guest_User();
	Guest_User(int gID, char sX[], char N[]);
	void display();
	void storeInformation();
};