// Fig. 18.9: Fig18_09.cpp
// Converting to C-style strings.
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string string1( "STRINGS" ); // string constructor with char* arg
   const char *ptr1 = 0; // initialize *ptr1
   int length = string1.length();
   char *ptr2 = new char[ length + 1 ]; // including null
   
   // copy characters from string1 into allocated memory
   string1.copy( ptr2, length, 0 ); // copy string1 to ptr2 char*
   ptr2[ length ] = '\0'; // add null terminator

   cout << "string string1 is " << string1
      << "\nstring1 converted to a C-Style string is "
      << string1.c_str() << "\nptr1 is ";

   // Assign to pointer ptr1 the const char * returned by
   // function data(). NOTE: this is a potentially dangerous
   // assignment. If string1 is modified, pointer ptr1 can
   // become invalid.
   ptr1 = string1.data();  
   
   // output each character using pointer
   for ( int i = 0; i < length; ++i )
      cout << *( ptr1 + i ); // use pointer arithmetic

   cout << "\nptr2 is " << ptr2 << endl;
   delete [] ptr2; // reclaim dynamically allocated memory
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
