#include<iostream>
#include"q1.h"

const int STKS = 4;
int main()
{
    Stock stocks[STKS] = {
        Stock("Omer", 1, 2.0),
        Stock("Furkan", 3, 4.0),
        Stock("Sagir", 5, 6.0),
        Stock("Del", 7, 8.0)
    };
    
    std::cout << "Stock holdings:\n";
    int st;
    for(st = 0; st < STKS; st++)
        stocks[st].show();
    
    //pointer'ı ilk elemana ayarlar
    const Stock * top = &stocks[0];
    for(st = 1; st < STKS; st++)
        top = &top -> topval(stocks[st]);
    //simdi, top, en degerli holdinge isaret ediyor:
    std::cout << "\nen degerli holding:\n";
    top -> show();

    return 0;
}