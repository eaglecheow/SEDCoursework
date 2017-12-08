#include "stdafx.h"
#include "ClassFile.h"

User::User()
{
	cout << "Creating a new user..." << endl;
	cout << "Please enter details," << endl;

	cout << "Username : ";
	cin >> this->Username;

	cout << "Password : ";
	cin >> this->Password;
}

void User::ChangePassword()
{
	cout << "User " << this->Username << " trying to change password." << endl;

	string oldPasswordInput = "";
	cout << "Please enter old password : ";
	cin >> oldPasswordInput;

	while (oldPasswordInput != this->Password)
	{
		cout << "Password Incorrect." << endl;
		cout << "Please reenter old password : ";
		cin >> oldPasswordInput;
	}

	cout << "Please enter new password : ";
	cin >> this->Password;

	cout << "Password Changed. " << this->Password << endl;
}

void User::CreateContent(string content)
{
	return;
}

string User::ReadContent()
{
	return "Default Content";
}

Consumer::Consumer() :User()
{
	this->IsAdmin = false;
	cout << "Consumer " << this->Username << " is created." << endl;
}

void Consumer::CreateContent(string content)
{
	cout << "Consumer can only read contents." << endl;
}

PremiumUser::PremiumUser() :Consumer()
{
	cout << this->Username << " is a premium user!" << endl;
}

string PremiumUser::ReadContent()
{
	return "Special content is brought to premium users";
}

BasicUser::BasicUser() : Consumer()
{
	this->IsAdmin = false;
	cout << this->Username << " is a basic user." << endl;
}

string BasicUser::ReadContent()
{
	return "Basic contents for basic user";
}