#include "deneme.h"
#include<iostream>

//yapıcılar(ayrıntılı surumler)
Stock::Stock() //varsayılan constructor
{
    std::cout << "varsayilan constructor cagirildi.\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << co << " kullanan constructor cagirildi.\n";
    company = co;

    if(n < 0)
    {
        std::cout << "shares negatif olamaz"
                  << company << " shares, 0'a ayarlandi.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
//class destructor
Stock::~Stock() //suslu
{
    std::cout << "Bye, " << company << "!\n";
}
//other methods
void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "shares negatif olamaz. "
                    << "islem iptal edildi.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0)
    {
        cout << "shares negatif olamaz. "
                << "islem iptal edildi.\n";
    }
    else if (num > shares)
    {
        cout << "sahip oldugundan fazlasini satamazsin. islem iptal edildi.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show()
{
    using std::cout;
    using std::ios_base;
    //biçim #.### ayarlandı
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Shares: " << shares << '\n';
    cout << " share Price: $" << share_val;
    
    //biçim #.## ayarlandı
    cout.precision(2);
    cout << "Total worth: $" << total_val << '\n';

    //orijinal biçimi geri yükle
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}