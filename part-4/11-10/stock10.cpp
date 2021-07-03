#include<iostream>
#include"stock10.h"

//yapıcılar (ayrıntılı sürümler)
Stock::Stock() //default constructor
{
    std::cout << "Varsayilan constructor cagirildi\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called.\n";
    company = co;

    if(n < 0)
    {
        std::cout << "shares negati olamaz; "
                  << company << " shares, 0'a ayarlandi.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
//class destructor
Stock::~Stock() //verbose class destructor
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
        cout << "Sahip oldugunuzdan fazlasini satamazsiniz. "
             << "islem iptal edildi.\n";
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
    //biçim #.###'e ayarlandı
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Shares: " << shares << '\n';
    cout << "  Share Price: $" << share_val;

    //biçim #.##'e ayarlandı
    cout.precision(2);
    cout << "   Total worth: $" <<total_val << '\n';

    //orijinal biçimi geri yükle
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}