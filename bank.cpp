#include "bank.h"
#include <iostream>




 bank::bank(std::string p, std::string mail, std::string phone)
	 :Account(p, mail, phone)
{
	 person = p;
	 gmail = mail;
	 cellNumber = phone;
	
}


 void bank::bankInfoShow()
{
	 customer = new Account(person,gmail,cellNumber);
	 customer->infoShow();
	 //bank info
	 std::cout << "checking account: " << bankAccount << std::endl;
	 std::cout << "savings account: " << savingsAccount << std::endl;
	 std::cout << "-------------------" << std::endl;


}

 void bank::addToCheck(int money)
 {
	 transaction.push_back(money);
	 bankAccount += money;
 }

 void bank::removeFromCheck(int dollars)
 {
	 dollars *= -1;
	 transaction.push_back(dollars);
	 dollars *= -1;
	 bankAccount = bankAccount - dollars;

 }

 void bank::addToSavings(int cash)
 {
	 savingsTransaction.push_back(cash);
	 savingsAccount += cash;
 }

 void bank::removeFromSavings(int currency)
 {
	 currency *= -1;
	 savingsTransaction.push_back(currency);
	 savingsAccount += currency;

 }




