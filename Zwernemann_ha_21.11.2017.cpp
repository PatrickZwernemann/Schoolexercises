

#include <iostream.h>

int main()
{
	/* init vars*/
	int a;
    int b;
	int x;

	a = 10;
	b = 20;
	cout << "x = 3 * (a + b) - b/8" << endl;
	x = 3 * (a + b) - b/8;
	cout << "x = " << x << endl;
	
	a = 10;
	b = 20;
	cout << "x=(a++) + (++b) " << endl;
	x=(a++) + (++b);
	cout << "x = " << x << endl;
	
	a = 10;
	b = 20;
	cout << "x = (a % b) % (b % (++a) ) ;" << endl;
	x = (a % b) % (b % (++a) );
	cout << "x = " << x << endl;
	
	getchar();    /*Das Fenster soll offen bleiben*/                         
	return 0;
}