#include<iostream>

//constant
const int ArSize = 10;

//function prototype
void strcount(const char * str);

int main(void)
{
    using namespace std;
    char input[ArSize];
    char next;

    cout << "enter a line:\n";
    cin.get(input, ArSize);
    while(cin)
    {
        cin.get(next);
        while(next != '\n') //string sığmadı
            cin.get(next); //kalanları elden cıkar
        strcount(input); 
        cout << "enter next line(empty line to quit):\n";
        cin.get(input,ArSize);
    }
    cout << "Bye.\n";
    return 0;
}
void strcount(const char * str)
{
    using namespace std;
    static int total = 0; //statik yerel degisken
    int count = 0; //otomatik yerel degisken

    cout << "\"" << str << "\" contains ";
    while(*str++) //string'in sonuna git
        count++;
    
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}