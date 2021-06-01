#pragma once
#include <iostream>
class Account
{
public:

	Account()
	{

	};
	~Account() {};

	void create_account();

private:
	
	char name[50];
	int accountNumber;

	
};

