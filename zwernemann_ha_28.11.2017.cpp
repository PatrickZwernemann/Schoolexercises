// SmallC++ 2010, all rights reserved
#include <iostream.h>
int main()   
{ 
	int x = 0;
	int y = 1;
	
	if (x && y) { 
		cout << "true" << endl;
	} else { 
		cout << "false" << endl;
	}
	 
    if (x || y) { 
    	cout << "true"<< endl;
    } else { 
      	cout << "false"<< endl;
    } 
    
    if (x || 0 && y && 1) {
    	cout << "true" << endl;
    } else { 
    	cout << "false" << endl;
    }
    
    if (0 || x || y && 0 || x) { 
    	cout << "false" << endl;
    } else { 
    	cout << "true" << endl;
    }
    
    int n = 5 / 6 
    if (n) { 
    	cout << "true" << endl;
    } else { 
    	cout << "false" << endl;
    }
    		
   if !(1 < 2 > 1) { 
    	cout << "false" << endl;
    } else { 
    	cout << "true" << endl;
    }
    
    if (1 == 1 == 1 && 0 == 0 == 0) { 
    	cout << "true" << endl;
    } else { 
    	cout << "false" << endl;
    }
    
  getchar();
  return 0; 
}