
class Inquiry {
protected:
	int inquiryId;
	char name[20];
	char inquiryType[10];
	char description[60];
public:
	Inquiry();
	Inquiry(int iID, char n[], char iT[], char d[]);
	void display();
	void respondInquiries();
	void updateInquiries();
};
