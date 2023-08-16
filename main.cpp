#include <iostream>
#include "Account.h"
#include "bank.h"
#include "Equity.h"


int main()
{


    Account* p1 = new Account("dylan knight", "dylanknight@gmail.com", "6083821615"); 
    Account* p2 = new Account("craig coulson", "criagC@gmail.com", "3524862987");
    Account* p3 = new Account("kylee mueller", "coneyStone@gmail.com", "5339081840");


    bank* b1 = new bank("dylan knight", "dylanknight@gmail.com", "6083821615");
    bank* b2 = new bank("craig coulson", "criagC@gmail.com", "3524862987");
    bank* b3 = new bank("kylee mueller", "coneyStone@gmail.com", "5339081840");



    b1->addToCheck(1300);
    b1->removeFromCheck(817);
    b1->addToSavings(1300);
    b1->removeFromSavings(817);
    
    b2->addToCheck(130);
    b2->removeFromCheck(183);
    b2->addToSavings(726);
    b2->removeFromSavings(153);

    b3->addToCheck(500);
    b3->removeFromCheck(100);
    b3->addToSavings(827);
    b3->removeFromSavings(403);

    b1->bankInfoShow();
    b2->bankInfoShow();
    b3->bankInfoShow();
    std::cout << std::endl;

    Equity* e1 = new Equity("dylan knight", "dylanknight@gmail.com", "6083821615");
    Equity* e2 = new Equity("craig coulson", "criagC@gmail.com", "3524862987");
    Equity* e3 = new Equity("kylee mueller", "coneyStone@gmail.com", "5339081840");


    e1->buyStock("VGD", 31, 84);
    e1->sellStock("VGD", 30);

    e2->buyStock("WMT", 16, 43);
    e2->sellStock("WMT", 28);

    e3->buyStock("RGT", 15, 21);
    e3->sellStock("RGT", 8);


    e1->equityInfoShow();
    e2->equityInfoShow();
    e3->equityInfoShow();


    delete p1;
    delete b1;
    delete e1;

    delete p2;
    delete b2;
    delete e2;

    delete p3;
    delete b3;
    delete e3;

}
