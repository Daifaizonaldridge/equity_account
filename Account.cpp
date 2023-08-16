#include "Account.h"
#include <iostream>
#include <string>




 Account::Account(std::string name, std::string gmail, std::string phoneNumber)
{
	//implementing people's info in the class
	 person = name;
	 mail = gmail;
	 Phone = phoneNumber;


}

void Account::infoShow()
{
	std::cout << "Account name is: " << person << std::endl;
	std::cout << "Account gmail: " << mail << std::endl;
	std::cout << "Account phone number: " << Phone << std::endl;
	

}
