#ifndef deneme_h_
#define deneme01_h_

#include<string>

class Stock
{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() {total_val = shares * share_val;}
    public:
        //2 constructor
        Stock(); //varsayılan constructor
        Stock(const std::string & co, long n = 0, double pr = 0.0);
        ~Stock();

        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};

#endif