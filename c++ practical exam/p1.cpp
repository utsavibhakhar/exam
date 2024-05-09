#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    int i,fact=1;
    cout<<"Factorial series is:";
    
    for(i=0;i<n;i++) 
	{
        if (i==0 || i==1)
            fact=1;
        else {
            fact*=i;
        }
        cout<<fact<<" ";
    }
    return 0;
}

