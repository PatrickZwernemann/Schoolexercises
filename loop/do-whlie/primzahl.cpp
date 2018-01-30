#include <iostream.h>
int main()   
{ 
	int userInput;
	
	do
	{
	cout << "Bitte geben sie eine Zahl ein: " << endl;
    	cin >> userInput ;
    	
    	for (int i = 2; i <= userInput/2; i++)
    	{
    		if (userInput % i == 0)
    		{
    			cout << userInput << " ist keine Primzahl" << endl;
    			break;
    		}
    		if (i == userInput/2)
    		{
    			cout << userInput << " ist eine Primzahl" << endl;
    		}
    	}
    	
    	
		
	}
	while (userInput != 0);
	
	
  getchar();
  return 0; 
}
