// SmallC++ 2010, all rights reserved
#include <iostream.h>
int main()   
{ 
	int userInput;
	int maxValue = 0;
	do
	{
		cout << "Bitte geben sie eine Zahl ein: " << endl;
    	cin >> userInput ;
    	
		if (userInput > 0){
			if	(userInput > maxValue) {
				maxValue = userInput;	
			}				
		}
	}
	while (userInput != 0);
	
	cout <<"Maximalwert ist: " << maxValue << endl;

  getchar();
  return 0; 
}