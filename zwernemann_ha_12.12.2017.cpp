// SmallC++ 2010, all rights reserved
#include <iostream.h>
int main()   
{ 
	int zahl1;
	int zahl2;
	
	cout << "geben sie die erste Zahl an: ";
	cin >> zahl1;
	cout << "geben sie die zweite Zahl an: ";
	cin >> zahl2;
	
	if (zahl1 == zahl2) {
		cout << zahl1  << "=" << zahl2 <<endl;
	} else  {
		cout << zahl1 << "!=" << zahl2 <<endl;
    } 
	
  getchar();
  return 0; 
}