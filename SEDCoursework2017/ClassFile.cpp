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

	string userInput = "Null";
	while (userInput != "y" && userInput != "n")
	{
		cout << "Admin status (y/n) : ";
		cin >> userInput;
	}
	this->IsAdmin = (userInput == "y") ? true : false;

	cout << "User created : " << "{Username: " << this->Username << " Password: " << this->Password << " AdminStatus: " << ((this->IsAdmin)?"True":"False") << "}" << endl;
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
