#include"qq1.cpp"
#include<cstring>
#include<iostream>

void setgolf(golf & g, const char * name, int hc)
{
    std::strcpy(g.fullname, name);
    g.handicap = hc;

    return;
}
int setgolf(golf & g)
{
    using std::endl;
    using std::cout;
    using std::cin;

    cout << "oyuncunun tam adini gir, bos giris prg sonlandirir: ";
    cin.get(g.fullname, Len);
    if((g.fullname)[0] == '\0')
    {
        cin.clear();
        cin.get();

        return 0;
    }
    else
    {
        while(cin.get() != '\n')
            continue;
        cout << "oyuncunun handikap sayisini gir: ";
        cin >> g.handicap;
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
    using std::cout;
    using std::endl;

    cout << "player name: " << g.fullname << endl;
    cout << "player handicap: " << g.handicap << endl;

    return;
}