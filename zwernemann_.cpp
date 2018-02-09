// SmallC++ 2010, all rights reserved
#include <iostream.h>
int main()   
{ 
	float x, y, z;
	cout << "bitte geben sie den ersten Wert ein: ";
	cin >> x;
	
	cout << "bitte geben sie den zweiten Wert ein: ";
	cin >> y;
	
	cout << "bitte geben sie den dritten Wert ein: ";
	cin >> z;
	 
	 
	float min = x;
	float max = x;
	
	if (x < y) { 
		min = x; 
		max = y;
    }
    
    if (z < min) {
    	min = z;
    }
    	
    if	(z > max) {
        max = z; 
    }
    
    
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max <<endl;
    		 
  getchar();
  return 0; 
}