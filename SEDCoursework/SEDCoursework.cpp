// SEDCoursework2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ClassFile.h"
#include <vector>

vector<User>userList;
void Menu();

void CreateUser()
{
	cout << "Please select user type : " << endl;
	cout << "1. Principal" << endl;
	cout << "2. Moderator" << endl;
	cout << "3. Content Creator" << endl;
	cout << "4. Premium User" << endl;
	cout << "5. Basic User" << endl;

	string userInput = "";
	while (userInput != "1" && userInput != "2" && userInput != "3" && userInput != "4" && userInput != "5")
	{
		cout << "Your option : ";
		cin >> userInput;
		cout << endl;
	}

	int option = stoi(userInput);
	
	if (option == 1)
	{
		Principal principal = Principal();
		userList.push_back(principal);
	}
	if (option == 2)
	{
		Moderator moderator = Moderator();
		userList.push_back(moderator);
	}
	if (option == 3)
	{
		ContentCreator contentCreator = ContentCreator();
		userList.push_back(contentCreator);
	}
	if (option == 4)
	{
		PremiumUser premiumUser = PremiumUser();
		userList.push_back(premiumUser);
	}
	if (option == 5)
	{
		BasicUser basicUser = BasicUser();
		userList.push_back(basicUser);
	}
	if (option != 1 && option != 2 && option != 3 && option != 4 && option != 5)
	{
		throw "Unavailable Menu Option Error";
	}
	cout << endl;
	Menu();
}

void ShowUser()
{
	cout << "Users available : " << endl;
	for each (User user in userList)
	{
		cout << user.Username << endl;
	}
	cout << endl;
	Menu();
}

void Menu()
{
	cout << "Please select a function : " << endl;
	cout << "1. Create User" << endl;
	cout << "2. Show User" << endl;

	string userInput = "";
	
	while (userInput != "1" && userInput != "2")
	{
		cout << "Your option : ";
		cin >> userInput;
	}

	int option = stoi(userInput);

	if (option == 1)
	{
		CreateUser();
	}
	if (option == 2)
	{
		ShowUser();
	}
	cout << endl;
}

int main()
{
	Menu();

	system("pause");
	return 0;
}