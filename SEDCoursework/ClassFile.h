#include <iostream>
#include <string>

using namespace std;

class User
{
public:
	User();
	void ChangePassword();
	virtual void CreateContent(string content);
	virtual string ReadContent();
protected:
	string Username;
	string Password;
	bool IsAdmin;
};

class Consumer: public User
{
public:
	Consumer();
	void CreateContent(string content) override;
};

class PremiumUser : public Consumer
{
public:
	PremiumUser();
	string ReadContent() override;
};

class BasicUser : public Consumer
{
public:
	BasicUser();
	string ReadContent() override;
};
