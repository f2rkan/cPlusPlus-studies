#include<iostream>
#include"f1.h"

const int STKS = 4;

int main(void)
{
    Stock stocks[STKS] = {
        Stock("omer", 1, 3),
        Stock("furkan", 3, 5.0),
        Stock("del", 6, 1.0),
        Stock("sagir", 3, 2.9)
    };

    std::cout << "Stock Holdings:\n";
    int st;
    for(st = 0; st < STKS; st++)
        stocks[st].show();
    
    //pointer'ı ilk elemana ayarlar
    const Stock * top = &stocks[0];
    for(st = 1; st < STKS; st++)
        top = &top -> topval(stocks[st]);

    //simdi top, en degerli holdinge point ediyor:
    std::cout << "\nen degerli holding:\n";
    top -> show();

    return 0;

}