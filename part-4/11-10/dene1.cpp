#include<iostream>
#include"dene.h"

using namespace std;

int main(void)
{
    rect rplace;
    polar pplace;

    cout << "enter x and y values (q to quit): ";
    while(cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "next x and y values (q to quit): ";
    }

    cout << "bye.\n";

    return 0;
}