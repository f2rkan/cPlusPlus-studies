//üç dosya programı örneği
#include<iostream>
#include"coordin.h" //structure şablonları, fonksiyon prototipleri

using namespace std;

int main(void)
{
    rect rplace;
    polar pplace;

    cout << "enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "next two numbers (q to quit): ";
    }
    cout << "bye!\n";

    return 0;
}