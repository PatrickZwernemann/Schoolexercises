#include <iostream.h>
int main()   
{ 	
	int eingabewert;
 	int zahl;
 	
 	cout << "Bitte geben sie eine Zahl ein: " << endl;
 	cin >> eingabewert ;
 	
 	if (eingabewert > 0) {
 	
 		zahl = eingabewert; 	
 		do
		{  
 			cout << "-" ; 
 		 
 			zahl--; 
		}
		while ( zahl > 0 );
	
		zahl = eingabewert;
		do
		{  
 			cout << "+" ; 
 		 
 			zahl--; 
		}
		while ( zahl > 0 );
  	}
  	getchar();
  	return 0; 
}