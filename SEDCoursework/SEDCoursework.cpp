// SEDCoursework2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ClassFile.h"


int main()
{
	BasicUser someConsumer = BasicUser();
	someConsumer.ChangePassword();
	someConsumer.CreateContent("Hello World");
	cout << someConsumer.ReadContent() << endl;

	system("pause");
	return 0;
}