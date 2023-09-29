// Generate Random Numbers in Given Range with repition
 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int i, rnum, amount, first, last;
    
    cout << "How many Random Numbers to Generate ? ";
    cin >> amount;
    
    srand(3);
// random number between 3 & 90
    for (i = 0; i < amount; i++)
    {
        rnum = rand() % (90+1);
        cout << endl << rnum;
    }

    cout << endl;

    return 0;
}
