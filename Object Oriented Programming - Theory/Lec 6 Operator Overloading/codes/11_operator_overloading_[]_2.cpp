#include <iostream>
using namespace std;
const int SIZE = 5;

class safearay {
   private:
      int arr[SIZE];
      
   public:
      safearay() 
	  {
	  	cout <<"Input array elements: "<<endl;
	  	
        register int i; // i stored in register of CPU
        for(i = 0; i < SIZE; i++) 
		{
          cin>>arr[i];
		  //arr[i] = i;
        }
      }
      
      // overloaded [] operator
      int& operator[](int i)
	  {
         if( i >= SIZE ) {
            cout << "Index out of bounds, returning 1st element of array" <<endl; 
            // return first element.
            return arr[0];
         }
         return arr[i];
      }
};

int main() {
   safearay A;

   cout << "Value of A[2] : " << A[2] <<endl;
   cout << "Value of A[5] : " << A[5]<<endl;
   cout << "Value of A[12] : " << A[12]<<endl;

   return 0;
}
