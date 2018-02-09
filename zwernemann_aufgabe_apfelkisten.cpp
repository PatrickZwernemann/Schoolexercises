// SmallC++ 2010, all rights reserved
#include <iostream.h>
int main()   
{ 
	int anzahlKisten;
	int kostenProKiste=0;
	cout << "Anzahl der Kisten: ";
	cin >> anzahlKisten;
	
	if  (anzahlKisten<1) {
		cout << "Mindestbestellmenge ist eine Kiste"<< endl;
    } else if (anzahlKisten<=10) { 
    	kostenProKiste=8;
    } else if (anzahlKisten<=99) {
        kostenProKiste=7;
    } else if (anzahlKisten<=1000) { 
    	kostenProKiste=6;
    } else { 
    	kostenProKiste=5;
    }
    
    int gesamtKosten=anzahlKisten * kostenProKiste;
    cout << kostenProKiste<<" eur pro Kiste"<< endl;
	cout << gesamtKosten<< " Gesamtkosten in eur" << endl;
	
  getchar();
  return 0; 
}