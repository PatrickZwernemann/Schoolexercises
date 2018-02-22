// SmallC++ 2010, all rights reserved
#include <iostream.h>
int main()   
{ 
	int userInput_1;
	int userInput_2;
	//?int high;
	int low;
	
	cout << "Bitte geben sie eine Zahl ein: ";
	cin >> userInput_1;
	cout << "Bitte geben sie eine Zahl ein: ";
	cin >> userInput_2;
	
	if (userInput_1 >= userInput_2){
		//high = userInput_1;
		low = userInput_2;
	} else {
		//high = userInput_2;
		low = userInput_1;				 
	}
	
	// find kgv
	for (int i = 2;i <= low;i++) {
		if (userInput_1 % i == 0 && userInput_2 % i == 0) {
			cout << "kgv ist: " << i << endl;
			break;
		}
	}
	
  getchar();
  return 0; 
}