/*
is-a-vs-has-a.cpp
This file demonstrates the difference between "is-a" and "has-a" relationships in C++   
using classes.
An "is-a" relationship is typically represented by inheritance, where a derived class is a specialized version of a base class.
A "has-a" relationship is represented by composition, where a class contains an instance of another class as a member variable.

is-a example :
This example includes a base class `Animal`, derived classes `Dog` and `Cat`.

has-a example :
this example include a base class of car `Car` and a member variable of type `Engine` to demonstrate the "has-a" relationship.
The `Car` class has an `Engine` object, indicating that a car "has-a" engine.
This code is a simple demonstration of these concepts and does not include any complex logic or functionality.  

*/

#include<iostream>
using namespace std;


class Animal 
{

public : 
    void action()
    {
        cout<<"The animal make a sound"<<endl;
    }

};

//the cat class is derived from the animal class and cat is a animal, and have is-a relationship

class Cat : public Animal
{
    void action()
    {
        cout<<"The cat meows"<<endl;
    }

};
// the dog class is derived from the animal class and dog is a animal, and have is-a relationship
class Dog : public Animal
{
    void action()
    {
        cout<<"The dog barks"<<endl;
    }

};


class Engine
{
public:
    void start()
    {
        cout << "Engine started" << endl;
    }
};


class Car
{
    public:
        Engine engine; // Car has an Engine, demonstrating a "has-a" relationship

        void enter()
        {
            cout << "enter into the car..." << endl;
            engine.start(); // Using the Engine's start method
        }
};


int main()
{

Animal* animal1 = new Cat();
Animal* animal2 = new Dog();
animal1->action(); // Output: The cat meows
animal2->action(); // Output: The dog barks       

Car myCar; // Create a Car object
myCar.enter(); // Output: enter into the car... Engine started      


return 0;
}
