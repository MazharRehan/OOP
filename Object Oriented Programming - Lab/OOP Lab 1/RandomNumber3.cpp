/*Generate Random Numbers in Given Range with repition
 	This program generates random numbers in given range.
The range may be provided by user at run - time

That is, this programs asks from user to enter the interval first.For example, 
if user enters interval as 5 and 20, then program further asks to enter the amount say 10, 
to generate 10 random numbers between 5 and 20. Let's have a look at the program
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int i, rnum, amount, first, last;
    cout << "Enter the Interval: ";
    cin >> first >> last;
    cout << "How many Random Numbers to Generate ? ";
    cin >> amount;
    
    cout << "\nList of " << amount << " Random Numbers Between " << first << " and " << last;
    srand(time(0));

    for (i = 0; i < amount; i++)
    {
       rnum = rand() % (last + 1 - first) + first;
        // rnum = rand() % last + first; //within range but many be repeated
		cout << endl << rnum;
    }

    cout << endl;

    return 0;
}
