#pragma once
#include <iostream>
#include <string>
using namespace std;
class MyException
{
	string message;
public:
	MyException(string message) 
	{
		this->message = message;
	}
	string what() { return message; }
};