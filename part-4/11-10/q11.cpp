#include"q1.h"
#include<iostream>

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
        std::cout << "hisse degerleri negatif olamaz. "
                  << company << " hisseler 0'a ayarlandı.\n";
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
//class destructor
Stock::~Stock() //hicbir sey yapmaz
{

}
void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "satin alma negatif olamaz. islem iptal edildi.\n";
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
    if(num < 0)
    {   
        std::cout << "satis islemi negatif olamaz. islem iptal edildi.\n";
    }
    else if (num > shares)
    {
        std::cout << "sahip oldugundan fazla satis yapamazsin.\n";
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

    //set to format #.###
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Share: " << shares << '\n';
    cout << "   Share Price: $" << share_val;

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
        return * this;
}