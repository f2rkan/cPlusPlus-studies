#include<iostream>
#include"d.cpp"

namespace pers
{
    using std::cout;
    using std::cin;

    void getPerson(Person & rd)
    {
        cout << "enter first name: ";
            cin >> rd.fname;
        cout << "enter last name: ";
            cin >> rd.lname;
    }
    void showPerson(const Person & rd)
    {
        std::cout << rd.lname << ", " << rd.fname;
    }
}
namespace debts
{
    void getDebt(Debt & rd)
    {
        getPerson(rd.name);
        std::cout << "enter debt: ";
            std::cin >> rd.amount;
    }
    void showDebt(const Debt & rd)
    {
        showPerson(rd.name);
        std::cout << ": $" << rd.amount << std::endl;
    }
    double sumDebts(const Debt ar[], int n)
    {
        double total = 0;
        for(int i = 0; i < n; i++)
            total += ar[i].amount;
        
        return total;
    }
}
