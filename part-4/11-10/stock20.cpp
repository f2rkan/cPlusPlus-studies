/*revize yontemleri dosyası.
ayrıca kurucuların ve yıkıcıların nasıl calıstıgını gorduk
bu dosya, bunları sessiz surumlerle degistiriyor:*/
#include<iostream>
#include"stock20.h"

//constructors
Stock::Stock() //default constructor
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
    company = co;
    if(n < 0)
    {
        std::cout << "hisse degeri negatif olamaz. "
                  << company << " tum hisseler 0'a ayarlandi.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
//class destructor
Stock::~Stock()
{
    std::cout << "\nDestructor cagirildi.\n\n";
}

//other methods
void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "satin alma sayisi negatif olamaz. islem sonlandirildi.\n";
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
        cout << "satilan hisse sayisi negatif olamaz. islem iptal edildi.\n";
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
void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    //set format to #.###
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Shares: " << shares << '\n';
    cout << "  Share Price: $" << share_val;

    //set format to #.##
    cout.precision(2);
    cout << "   Total Worth: $" << total_val << '\n';


    //restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val)
        return s;
    else
        return *this;
}
