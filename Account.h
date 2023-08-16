#pragma once
#include <iostream>
#include <string>



class Account
{
public:
	Account(std::string name, std::string gmail, std::string phoneNumber);
	virtual void infoShow();

private:
	std::string person;
	std::string mail;
	std::string Phone;


};

