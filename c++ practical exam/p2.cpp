#include <iostream>
#include <string>
using namespace std;
class bank
{
	private:
    	int a_number;
    	string a_name;
    	string a_branch;
    	float a_balance;
    	
	public:
    bank(int number,string name,string branch,float balance) 
	{
        a_number = number;
        a_name = name;
        a_branch = branch;
        a_balance = balance;
    }

    void displayAccount() 
	{
        cout << "Account Number: " << a_number << endl;
        cout << "Account Name: " << a_name << endl;
        cout << "Account Branch: " << a_branch << endl;
        cout << "Account Balance:" << a_balance << endl;
    }
};
int main() 
{
    bank b1(1,"utsavi","Main Branch",7000),
        b2(2,"krishna","Downtown Branch",800),
        b3(3,"dewangi","East Branch",10000);
        
    int n;
    cout << "Enter the account number to search: ";
    cin >> n;

    switch(n)
    {
    	case 1:
    		b1.displayAccount();	
    	break;
    	
    	case 2:
    		b2.displayAccount();
    		break;
    		
    	case 3:
    		b3.displayAccount();
    		break;
    		
    	default:
    		cout<<"Invalid data...";
	}
    return 0;
}

