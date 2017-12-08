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

Admin::Admin() :User()
{
	this->IsAdmin = true;
	cout << "Admin " << this->Username << " has been created." << endl;
}

void Admin::CreateContent(string content)
{
	cout << "Content created : " << content << endl;
}

string Admin::ReadContent()
{
	return "Admins can read all contents.";
}

void Admin::EditContent(string content)
{
	cout << "Admin type unknown, unable to edit content." << endl;
}

Principal::Principal(): Admin()
{
	cout << "Admin " << this->Username << " is a principal!" << endl;
}

void Principal::EditContent(string content)
{
	cout << "Content edited : " << content << endl;
}

void Principal::DeleteContent()
{
	cout << "Content deleted" << endl;
}

Moderator::Moderator() : Admin()
{
	cout << "Admin " << this->Username << " is a moderator!" << endl;
}

void Moderator::CreateContent(string content)
{
	cout << "Moderators can't create content!" << endl;
}

void Moderator::EditContent(string content)
{
	cout << "Content edited : " << content << endl;
}

ContentCreator::ContentCreator(): Admin()
{
	cout << "Admin " << this->Username << "is a content creator!" << endl;
}

void ContentCreator::CreateContent(string content)
{
	cout << "Content created : " << content << endl;
}

void ContentCreator::EditContent(string content)
{
	cout << "Content creator cannot edit content!" << endl;
}