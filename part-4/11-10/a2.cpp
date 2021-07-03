#include<iostream>
#include<cstring>
#include "a1.cpp"

void setgolf(golf & g, const char * name, int hc)
{
    std::strcpy(g.fullname, name);
    g.handicap = hc;
    return;
}
int setgolf(golf & g)
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "oyuncunun ismi: "; cin.get(g.fullname, Len);
    if((g.fullname)[0] == '\0')
    {
        cin.clear();
        cin.get();

        return 0;
    }
    else
    {
        while(cin.get() != '\n') continue;

        cout << "handikap gir: "; cin >> g.handicap;

        cin.get();
        return 1;
    }
}
void handicap(golf & g, int hc)
{
    g.handicap = hc;
    return;
}
void showgolf(const golf & g)
{
    std::cout << "player name: " << g.fullname << std::endl;
    std::cout << "player handicap: " << g.handicap << std::endl;
}