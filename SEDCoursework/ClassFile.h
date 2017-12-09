#include <iostream>
#include <string>

using namespace std;

class User
{
public:
	User();
	string Username;
	void ChangePassword();
	virtual void CreateContent(string content);
	virtual string ReadContent();
protected:
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

class Admin : public User
{
public:
	Admin();
	void CreateContent(string content) override;
	string ReadContent() override;
	virtual void EditContent(string content);
};

class Principal :public Admin
{
public:
	Principal();
	void EditContent(string content) override;
	void DeleteContent();
};

class Moderator : public Admin
{
public:
	Moderator();
	void EditContent(string content) override;
	void CreateContent(string content) override;
};

class ContentCreator : public Admin
{
public:
	ContentCreator();
	void EditContent(string content) override;
	void CreateContent(string content) override;
};
