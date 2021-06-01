// SimpleBankManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>
#include "Account.h"

//*************************************
//		FORWARD DECLARATIONS
//*************************************
void introduction();


int main()
{
	char choice = 'a';
	int number;
	Account ac;
	introduction();
	
	do
	{
		system("cls");
		std::cout << "\n\n\n\tMAIN MENU";
		std::cout << "\n\n\t01.NEW ACCOUNT";
		std::cout << "\n\n\t02.DEPOSIT";
		std::cout << "\n\n\t03.WITHDRAW";
		std::cout << "\n\n\t04.VIEW CURRENT BALANCE";
		std::cout << "\n\n\t05.ACCOUNT LIST";
		std::cout << "\n\n\t06.CLOSE ACCOUNT";
		std::cout << "\n\n\t07.MODIFY ACCOUNT";
		std::cout << "\n\n\t08.EXIT";
		std::cout << "\n\n\t SELECT AN OPTION <01...08> ";
		std::cin >> choice;
		system("cls");
		
		switch (choice)
		{
		case '1':
			ac.create_account();
			break;
		case '2':
			std::cout << "HELLO WORLD";
			break;
		case '3':
			std::cout << "HELLO WORLD";
			break;
		case '4':
			std::cout << "HELLO WORLD";
			break;
		case '5':
			std::cout << "HELLO WORLD";
			break;
		case '6':
			std::cout << "HELLO WORLD";
			break;
		case '7':
			std::cout << "HELLO WORLD";
			break;
		case '8':
			std::exit(0);
			break;


		default:
			std::cout << "NOT A VALID OPTION";

			break;
		}
		std::cin.ignore();
		std::cin.get();
	}
	while (choice != '8');
	
	
	return 0;
}

void introduction() 
{
	
	std::cout << "\n\n\n\t BANK";
	std::cout << "\n\n\t MANAGEMENT";
	std::cout << "\n\n\t SYSTEM";
	std::cout << "\n\n\n\nMADE BY : JASPER STEENHUIS" << std::endl;
	std::cin.get();
	
}

void Account::create_account()
{
	
		std::cout << "\n\n\n\t CREATE ACCOUNT";
		std::cout << "\n\n\n ================================";
		std::cout << "\n\n ENTER NAME: ";
		std::cin.ignore();
		std::cin.getline(name, 50);

	
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
