#include<iostream>
#include"stock10.h"

int main()
{
    {
        using std::cout;
        cout << "yeni nesneler olusturmak icin constructor'leri kullanma\n";
        Stock stock1("NanoSmart", 12, 20.0); //syntax1
        stock1.show();
        Stock stock2 = Stock("Buffo Object", 2, 2.0); //syntax2
        stock2.show();

        cout << "stock1'i stock2'ye atama\n";
        stock2 = stock1;
        cout << "stock1 ve stock2'yi listeleme:\n";
        stock1.show();
        stock2.show();

        cout << "bir nesneyi sifirlamak icin bir yapici kullanma\n";
        stock1 = Stock("Nifty Foods", 10, 50.0); //gecici nesne
       
        cout << "revize edilen stock1:\n";
        stock1.show();
        cout << "Done.\n";
    }

    return 0;
}