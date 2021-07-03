#include<iostream>
int tom = 3; //ex
int dick = 30; //ex

static int harry = 300; //static, internal linkage

//function prototype
void remote_access();

int main()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();

    return 0;
}