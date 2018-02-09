// SmallC++ 2010, all rights reserved
#include <iostream.h>
int main()   
{ 
	int userInput;
	cout << "Bitte geben Sie eine Zahl ein: " ;
	cin >> userInput ;
	
	if (userInput > 0) {
		int summ = 0;
		
		do
		{
			
			summ +=userInput;
			userInput--;
		}
		while (userInput > 0);
		cout << summ;
	}
  	getchar();
  	return 0; 
}