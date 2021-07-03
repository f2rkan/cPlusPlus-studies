//support.cpp --use external variable
//compile with external.cpp

#include<iostream>
extern double warming; //use warming from another file

//function prototypes
void update(double dt);
void local();

using std::cout;
void update(double dt) //modiies global variable
{
    extern double warming;//optional redeclaration
    warming += dt;
    cout << "updating global warming to " << warming;
    cout << " degrees.\n";
}
void local() //uses local variable
{
    double warming = 0.8; //new variable hides external one
    cout << "local warming = " << warming << " degrees.\n";
    //access global variable with the scope
    //resolution operator
    cout << "but global warming = " << ::warming;
    cout << " degrees.\n";
}