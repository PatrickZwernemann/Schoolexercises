// SmallC++ 2010, all rights reserved
#include <iostream.h>

int main()   
{
/*
Eine Zahl einlesen und diese in Schriftform ausgeben Werte 0-6
Werte zwischen 3-5 soll super ausgeben
*/
	while (true) {
	
		int x;
		cout << "bitte zahl eingeben" << endl; 
 		cin >> x  ;
 	
		switch (x) { 
			case 1 : cout << "eins" << endl;
			break;
			case 2 : cout << "zwei" << endl;
			break;
			case 3 : 
			case 4 : 
			case 5 : cout << "super" << endl;
			break;
			case 6 : cout << "sechs" << endl;
			break;
			case 7 : cout << "exit loop" << endl;
			return 0; 
			default: cout << "bitte nur werte zwischen 1 bis 6 eingeben oder 7 zum beenden des programms" << endl;
			break; 
		}
	}
  getchar();
  return 0; 
}

