#include<iostream>
#include "qq1.cpp"

const int size = 5;

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

   //oyuncular girilir ve kataloglanır
   cout << "en fazla " << size << " oyuncu bilgisi girebirsin.\n";
   int players = 0;
   golf list[size];
   while(players < size && setgolf(list[players]))
   {
       players++;
   }

   //oyuncular goruntulenir
   cout << "iste oyuncular:\n";
   if (players > 0)
   {
       for(int i = 0; i < players; i++)
       {
           showgolf(list[i]);
       }
       //kullanıcı yeni handikap degerleri giriyor
       cout << "numara gir: ";
       int newhandicap;
       cin.clear();

       while (!(cin >> newhandicap))
       {
           cin.clear();
           while(cin.get() != '\n')
                continue;
            cout << "tekrar dene: ";
       }
       //tum oyuncuların handikap degeri
       //kullanıcı tarafından verilen degere sıfırlanır ve
       //oyuncular tekrar goruntulenir
       cout << "iste oyuncularınız, yeni handikaplariyla:\n";
       for(int i = 0; i < players; i++)
       {
           handicap(list[i], newhandicap);
           showgolf(list[i]);
       }
   }
   else
   {
       cout << "dosyada oyuncu yok.\n";
   }
   cout << "gitmeden once bir oyuncu daha yapmak ister misin?(y or n): ";
   char ch;
   cin.get(ch);
   while(cin.get() != '\n')
        continue;
    
    if(ch == 'y' || ch == 'Y')
    {
        char lastPlayerName[Len];
        int lastPlayerHandicap;
        cout << "oyuncu adi: ";
        cin.get(lastPlayerName, Len);
        while(cin.get() != '\n')
            continue;
        cout << "oyuncu handikapini gir: ";
        while(!(cin >> lastPlayerHandicap))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "tekrar dene: ";
        }
        golf lastPlayer;
        setgolf(lastPlayer, lastPlayerName, lastPlayerHandicap);
        cout << "iste bunlari girdin:\n";
        showgolf(lastPlayer);
    }
    return 0;
}