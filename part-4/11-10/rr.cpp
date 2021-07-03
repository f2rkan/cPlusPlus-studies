#include<iostream>
#include"r.h"

const int STKS = 4;

int main(void)
{
    Stock stocks[STKS] = {
        Stock("Omer", 1, 2.3),
        Stock("Furkan", 3, 4.4),
        Stock("Sagir", 4, 22),
        Stock("Del", 9, 8.4)
    };

    //stock holdings
    std::cout << "Stock Holdings:\n";
    int st;
    for(st = 0; st < STKS; st++)
        stocks[st].show();
    //pointer'ı ilk elemana ayarlar
    const Stock * top = &stocks[0];
    for(st = 1; st < STKS; st++)
        top = &top -> topval(stocks[st]);

    //simdi top, en degerli holding'e point ediyor:
    std::cout << "\nen degerli holding:\n";
        top -> show();

    return 0;
}