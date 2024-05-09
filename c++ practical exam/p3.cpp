#include<iostream>
using namespace std;
int main()
{
	int x=2;
	int y=0;
	
	try{
	if(y==0)
		throw y;
		int res=x/y;
		cout<<"division is:"<<res<<endl;
	}
	catch(int u){
		cout<<"can't divisiable zero...";	
	}
	return 0;
}
