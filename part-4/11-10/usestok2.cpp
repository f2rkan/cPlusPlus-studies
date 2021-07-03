#include<iostream>
#include"stock20.h"

const int STKS = 4;
int main(void)
{
    //baslatılmıs nesnelerden olusan bir dizi baslatır
    Stock stocks[STKS] = {
        Stock("Nano Smart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };


    std::cout << "Stock holdings:\n";
    int st;
    for(st = 0; st < STKS; st++)
        stocks[st].show();
    
    //pointer'ı ilk elemana ayarlar
    const Stock * top = &stocks[0];
    for(st = 1; st < STKS; st++)
        top = &top -> topval(stocks[st]);

    //simdi top, en degerli holdinge point ediyor
    std::cout << "\nEn degerli holding:\n";
    top -> show();
    return 0;
}