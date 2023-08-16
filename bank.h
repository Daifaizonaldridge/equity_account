#pragma once
#include <iostream>
#include "Account.h"
#include <vector>

class bank:public Account
{
public:
	bank(std::string p, std::string mail, std::string phone);
	void bankInfoShow();
	void addToCheck(int money);
	void removeFromCheck(int dollars);
	void addToSavings(int cash);
	void removeFromSavings(int currency);
	

private:
	Account* customer;
	std::string person;
	std::string gmail;
	std::string cellNumber;
	std::vector<int>transaction;
	int bankAccount;
	std::vector<int>savingsTransaction;
	int savingsAccount;

};

