#include "Equity.h"
#include <iostream>
#include "Account.h"
#include <vector>


Equity::Equity(std::string p, std::string mail, std::string phone):Account(p, mail, phone)
{
	person = p;
	gmail = mail;
	phoneNum = phone;
	

}

void Equity::equityInfoShow()
{
	customer = new Account(person, gmail, phoneNum);
	customer->infoShow();
	//equity info (portfolio balance, stock names, stock values)
	std::cout << "portfolio value is: " << portfolioValue << std::endl;
	std::cout << "++++++++++++++++++++" << std::endl;
	


}

void Equity::buyStock(std::string ticker, int stockPrice, int stockAmount)
{
	transaction.push_back(ticker);
	portfolioValue += stockPrice * stockAmount;
	sPrice = stockPrice;
}

void Equity::sellStock(std::string stockName, int stockAmount)
{
	for (int i = 0; i < transaction.size(); i++) {
		if(transaction[i] == stockName) {
			portfolioValue -= stockAmount*sPrice;
			break;
		}
	}

}


