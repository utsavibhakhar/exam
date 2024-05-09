#include <iostream>
using namespace std;
class Dog{
	public:
   		void eat() 
		{
        	cout << "dog eats" << endl;
    	}
};
class Cat:public Dog{
	public:
    	void Bday()
		{
        	cout << "cat gives birth" << endl;
    	}
};
class Bird:public Dog {
	public:
    	void Eggs() 
		{
        	cout << "Bird lays eggs" << endl;
    	}
};
class Platypus:public Cat,public Bird{
	public:
    	void specialAbility() 
		{
        	cout << "Platypus has a special ability to eggs and give birth" << endl;
    	}
};

int main() {
    Platypus perry;
    
    perry.Bday();   
    perry.Eggs();     
    perry.specialAbility(); 
    return 0;
}

