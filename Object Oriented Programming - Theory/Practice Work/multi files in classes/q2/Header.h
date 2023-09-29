#include <iostream>
using namespace std;

void input(int a[], int size)
{
    cout << "Enter " << size << " values : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}


void display(int a[], int size)
{
    cout << "Values : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " , ";
    }
}

bool isPrime(int value)
{
    for (int i = 2; i <= value / 2; i++)
    {
        if (value % i == 0)
            return false;
    }

    return true;
}

int findCount(int a[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (isPrime(a[i]))
            count++;
    }

    return count;
}
