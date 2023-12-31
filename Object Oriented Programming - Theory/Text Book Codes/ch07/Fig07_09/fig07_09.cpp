// Fig. 7.9: fig07_09.cpp
// Bar chart printing program.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const int arraySize = 11;
   int n[ arraySize ] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

   cout << "Grade distribution:" << endl;

   // for each element of array n, output a bar of the chart
   for ( int i = 0; i < arraySize; ++i ) 
   {
      // output bar labels ("0-9:", ..., "90-99:", "100:" )
      if ( i == 0 )
         cout << "  0-9: ";
      else if ( i == 10 )
         cout << "  100: ";
      else
         cout << i * 10 << "-" << ( i * 10 ) + 9 << ": ";

      // print bar of asterisks
      for ( int stars = 0; stars < n[ i ]; ++stars )
         cout << '*';

      cout << endl; // start a new line of output
   } // end outer for
} // end main

/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
