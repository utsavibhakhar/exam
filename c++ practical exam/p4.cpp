#include <iostream>
using namespace std;
class Animal{
public:
     void eat() 
     {
        cout << "Animal is eating";
    }
};
class Dog:public Animal{
public:
    void eat() 
    {
        cout << "Dog is eating"<<endl;
    }
};
class Cat:public Animal {
public:
    void eat() 
    {
        cout << "Cat is eating";
    }
};
int main() 
{
    Dog d;
    Cat c;
    
    d.eat();
    c.eat();
    return 0;
}

