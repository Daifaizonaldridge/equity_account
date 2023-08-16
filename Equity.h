#pragma once
#include <iostream>
#include "Account.h"
#include <vector>


class Equity:public Account
{
public:
	Equity(std::string p, std::string mail, std::string phone);
	void equityInfoShow();
	void buyStock(std::string ticker, int stockPrice, int stockAmount);
	void sellStock(std::string stockName, int stockAmount);

private:
	Account* customer;
	std::string person;
	std::string gmail;
	std::string phoneNum;
	std::vector<std::string>transaction;
	int portfolioValue;
	int sPrice;
};

