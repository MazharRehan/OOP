/*Generate Random Numbers without Repetition
This is the program that generates random numbers without repetition.
Here we've used ' srand() ' (seed random) function to set the initial point
for generating random numbers using ' time() ' function.

Note - The time() function is used to set initial point for srand() function. 
Here we've used time() function, because it is the thing that is continuouly 
changing its value.

The function time() is defined in time.h header file. So don't forgot to include 
this header file, before executing the program given below. Rest of the things 
are same as in previous program.
*/


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int i;
    srand(time(0));
    //srand(0);
    for (i = 0; i < 10; i++)
        cout << rand()<< endl;

    cout << endl;
    return 0;
}
