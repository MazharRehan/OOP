#include<iostream>
#include "Header.h"
using namespace std;

int main()
{
    const int SIZE = 5;
    int arr[SIZE];

    input(arr, SIZE);
    int result = findCount(arr, SIZE);
    display(arr, SIZE);
    cout << "Total number of primes are : " << result << endl;

    return 0;
}
