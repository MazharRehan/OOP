#include <iostream>
using namespace std;
const int SIZE = 5;

class safearay 
{
private:


public:
    int arr[SIZE];
    safearay()
    {
        int i;
        for (i = 0; i < SIZE; i++)
        {
            arr[i] = i;
        }
    }

    void operator[](int i)
    {
        if (i >= SIZE)
            cout << "Index out of bounds" << endl;
    }
};

int main() {
    safearay A;

    cout << "For A[3] "  << endl;
    A[3];
    cout << "For A[7] ";
    A[7];

    return 0;
}
/*
For A[3]
For A[7] Index out of bounds
*/
