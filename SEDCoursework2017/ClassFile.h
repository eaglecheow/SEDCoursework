#include <iostream>
#include <string>

using namespace std;

class User
{
public:
	User();
	void ChangePassword();
	virtual void CreateContent(string) = 0;
protected:
	string Username;
	string Password;
	bool IsAdmin;
};

