// SmallC++ 2010, all rights reserved
#include <iostream.h>

void ausgabe(int ausgabezahl)
{
	cout << ausgabezahl << " ";
}

int main()   
{ 
	int Zahl ;
	cout << "Bitte geben sie eine Zahl ein" << endl;
	cin >> Zahl;
	
	for (int i = 1; i >= 1 && i < Zahl; i = i + 2)
	{
		ausgabe(i);
	} 
	cout << "\n";
  getchar();
  return 0; 
}