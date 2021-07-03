#include<iostream>
#include "z1.cpp"

void other(void);
void another(void);

int main(void)
{
    using debts::Debt;
    using debts::showDebt;

    Debt golf = {"Billy", "Russo", 120.0};
    showDebt(golf);

    other();
    another();

    return 0;
}
void other(void)
{
    using std::cout;
    using std::endl;
    using namespace debts;

    Person qe = {"frank", "castle"};
    showPerson(qe);

    Debt zippy[3];
    int i;
    for(i = 0; i < 3; i++)
        getDebt(zippy[i]);
    for(i = 0; i < 3; i++)
        showDebt(zippy[i]);
    
    cout << "total debt: " << sumDebts(zippy, 3) << endl;

    return;
}
void another(void)
{
    using pers::Person;
    Person collector = {"collector", "coll"};
    pers::showPerson(collector);
    std::cout << std::endl;
}