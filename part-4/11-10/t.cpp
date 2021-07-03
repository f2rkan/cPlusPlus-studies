#include<iostream>
#include"t.h"

Stock::Stock() //default construktor
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string & co, long n = 0, double pr = 0.0)
{
    company = co;
    if(n < 0)
    {
        std::cout << "shares degeri negatif olamaz. " << company << " shares degeri 0'a ayarlandi.\n";
        shares = 0;
    }
    else
    {
        shares = n;
        share_val = pr;
        set_tot();
    }
}
Stock::~Stock()
{
    std::cout << "Destructor cagirildi.\n";
}

//other methods
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
        std::cout << "satma islemi negatif olamaz.\n";
    }
    else if (num > shares)
    {
        std::cout << "sahip olduklarindan fazlasini satamazsin.\n";
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

    //set to format #.###
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Share: " << shares << "\n";
    cout << "   Share Price: $" << share_val;

    //set to fomat #.##
    cout.precision(2);
    cout << "    Total Worth: $" << total_val << '\n';

    //restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val)
        return s;
    else
        return * this;
}