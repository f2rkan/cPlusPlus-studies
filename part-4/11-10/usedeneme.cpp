#include<iostream>
#include"deneme.h"

int main()
{
    {
        using std::cout;
        cout << "yeni nesneler olusturmak icin constructorler kullanildi.\n";
        Stock stock1("ilk constuctor", 1, 2.0); //syntax1
        stock1.show();

        Stock stock2 = Stock("ikinci constructor", 4, 4.0); //syntax2
        stock2.show();

        cout << "stock1'i stock2'ye ata:\n";
        stock2 = stock1;
        cout << "stock1 ve stock2'yi listele:\n";
        stock1.show();
        stock2.show();

        cout << "bir nesneyi sifirlamak icin bir yapici kullanmak:\n";
        stock1 = Stock("sifirlandi", 5, 5.0); //gecici nesne
        cout << "revize edilen stock1:\n";
        stock1.show();
        cout << "Done.\n";
    }
}