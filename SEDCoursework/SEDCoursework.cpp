// SEDCoursework2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ClassFile.h"


int main()
{
	ContentCreator someConsumer = ContentCreator();
	someConsumer.ChangePassword();
	someConsumer.CreateContent("Hello World");
	cout << someConsumer.ReadContent() << endl;
	someConsumer.EditContent("DDD");

	system("pause");
	return 0;
}