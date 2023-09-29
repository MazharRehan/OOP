//C++ Program to generate random numbers without range

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i;
    for (i = 0; i < 10; i++)
        cout << rand() << endl;

    cout << endl;
    return 0;
}
