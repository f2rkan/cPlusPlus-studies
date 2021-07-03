#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
    private:
        enum{MAX = 10}; //sınıfa özgü sabit--
        Item items[MAX]; //yığın, ogeleri tutar
        int top; //top yıgın ogesi icin dizin
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        //yıgın zaten doluysa push(), false degerini dondurur
        bool push(const Item & item); //yıgına item'i ekle
        //yıgın zaten bossa pop() false; aksi takdirde true degerini dondurur
        bool pop(Item & item); //ogeye top'u bas
};

#endif