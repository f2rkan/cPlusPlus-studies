#include<iostream>
#include"stock00.h"

int main(void)
{
    Stock x;
    x.acquire("Nanosmart", 20, 12.50);
    x.show();
    x.buy(15, 18.125);
    x.show();
    x.sell(400, 20.00);
    x.show();
    x.buy(30000, 40.125);
    x.show();
    x.sell(30000, 0.125);
    x.show();

    return 0;
}