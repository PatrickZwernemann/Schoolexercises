// SmallC++ 2010, all rights reserved
#include <iostream.h>
int main()   
{ 
	int userInput_1;
	int userInput_2;
	
	int low;
	
	cout << "Bitte geben sie eine Zahl ein: ";
	cin >> userInput_1;
	cout << "Bitte geben sie eine Zahl ein: ";
	cin >> userInput_2;
	
	if (userInput_1 >= userInput_2){
		
		low = userInput_2;
	} else {
		
		low = userInput_1;				 
	}
	int kgv;
	int ggt;
	
	// find kgv and ggt
	for (int i = 2;i <= low;i++) {
		if (userInput_1 % i == 0 && userInput_2 % i == 0) {
			if (!kgv)
			{
				kgv = i;
				
			} 
			// deklaiere ggt 			
		}
	}
	
	// ausgabr kgv & ggt, evt 2 if anweisungen
  getchar();
  return 0; 
}