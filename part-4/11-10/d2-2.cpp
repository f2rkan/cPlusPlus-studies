#include<iostream>
#include"d.cpp"

void other();
void another();

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

    Person pg = {"XX", "YY"};
    showPerson(pg);
    cout << endl;

    Debt zippy[3];
    int i;
    for(i = 0; i < 3; i++)
        getDebt(zippy[i]);
    for(i = 0; i < 3; i++)
        showDebt(zippy[i]);
    
    cout << "Total debt: $ " << sumDebts(zippy, 3) << endl;

    return;
}
void another(void)
{
    using pers::Person;
    Person collector = {"Ali", "Veli"};
    pers::showPerson(collector);
    std::cout << std::endl;
}