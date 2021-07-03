//stock00.cpp -- Stock sınıfının implamasyonu
//version 00
#include<iostream>
#include"stock00.h"

void Stock::acquire(cont std::string & co, long n, double pr)
{
    company = co;
    if(n < 0)
    {
        std::cout << "hisse sayisi negatif olamaz.\n"
                  << company << " hisse 0 olarak ayarlanmis.\n";
        shares = 0;
    }
    else
        shares = n;
    
    share_val = pr;
    set_tot();
}
void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << 
    }
}