// string

#include <iostream>
#include<string>
using namespace std;


int main()
{
	cout << "\"mazhar rehan\"" << endl; //	"mazhar rehan"
	cout << "\"mazhar rehan" << endl;	//	"mazhar rehan
	cout << "mazhar rehan\\n" << endl;	//	mazhar rehan\n
	cout << "mazhar rehan\\\n" << endl;
	cout << "mazhar rehan\\\\n" << endl;
	cout << "mazhar rehan\\\\\n" << endl;
	cout << "1";

	return 0;
}
/*OUTPUT:
"mazhar rehan"
"mazhar rehan
mazhar rehan\n
mazhar rehan\

mazhar rehan\\n
mazhar rehan\\

1
*/
