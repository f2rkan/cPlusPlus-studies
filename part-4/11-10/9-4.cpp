#include<iostream>

void oil(int);

int main(void)
{
    using namespace std;

    int texas = 31;
    int year = 2011;

    cout << "In main(), texas = " << texas << ", &texas = "
         << &texas << endl;
        
    cout << "In main(), year = " << year << ", &year = "
         << &year << endl;
        
    oil(texas);
    cout << "In main(), texas = " << texas << ", &texas = "
         << &texas << endl;
    cout << "In main(), year = " << year << ", &year = "
         << &year << endl;
        
    return 0;
}
void oil(int x)
{
    using namespace std;
    int texas = 5;

    cout << "In oil(), texas = " << texas << ", &texas = "
         << &texas << endl;

    cout << "In oil(), x = " << x << ", &x = " << &x << endl;
    { //start a block
        int texas = 113;
        cout << "In block, \"block\"texas = " << texas;
        cout << ", &texas = " << &texas << endl;

        cout << "In oil(\"block\"), x = " << x << ", &x = "
             << &x << endl;
    }//end a block

    cout << "Post-block texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}