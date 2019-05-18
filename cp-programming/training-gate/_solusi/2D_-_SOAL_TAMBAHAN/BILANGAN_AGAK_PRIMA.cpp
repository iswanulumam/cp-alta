#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
  
using namespace std;
   
bool agak(unsigned long long int n){
    long count=0;
 	bool prime=true;
 	for (int i=2; i<=sqrt(n); i++)
 		if (n%i==0) 
 		{
    		prime = false;
    		break;
 		}
 	
 	if (!prime)
    	for (int i=2; i<n; i++)
    	{
	    	if (n%i==0)
    			count++;
    			
    		if (count>2)
	    		return false;
	    }
	    
    return (count<=2) || prime;
}
  
int main(){    
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        unsigned long long a;
        cin >> a;     
        if (agak(a))
            cout << "YA" << endl;
        else
            cout << "TIDAK" << endl;
    }
    return 0;
}