#include<iostream>
#include "a1.cpp"

const int size = 5;

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "en fazla " << size << " oyuncu girisi yapabilirsin.\n";
    int players = 0;
    golf list[players];

    while(players < size && setgolf(list[players]))
    {
        players++;
    }
    cout << "iste girislerin:\n";
    if(players > 0)
    {
        for(int i = 0; i < players; i++)
        {
            setgolf(list[i]);
        }
        cout << "re-handicap degeri gir: ";
        int newHandicap;
        cin.clear();

        while(!(cin >> newHandicap))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "tekrar dene: ";
        }
        cout << "guncellenen handikaplar:\n";
        for(int i = 0; i < players; i++)
        {
            handicap(list[i], newHandicap);
            showgolf(list[i]);
        }
    }
    else
    {
        cout << "dosyada oyuncu bulunamadi.\n";
    }
    cout << "yeni oyuncu (y or n): ";
    char ch;
    cin.get(ch);
    while(cin.get() != '\n')
        continue;
    if(ch == 'y' && ch == 'Y')
    {
        char lastPlayerName[Len];
        int lastPlayerHandicap;
        cout << "enter player name: ";
        cin.get(lastPlayerName, Len);

        while(cin.get() != '\n')
            continue;
        
        cout << "enter new player's handicap: ";
            while(!(cin >> lastPlayerHandicap))
            {
                cin.clear();
                while(cin.get() != '\n')
                continue;
                cout << "tekrar dene: ";
            }

            golf lastPlayer;
            setgolf(lastPlayer, lastPlayerName, lastPlayerHandicap);
            cout << "iste girdiklerin:\n";
            showgolf(lastPlayer);
    }
    return 0;
    
}