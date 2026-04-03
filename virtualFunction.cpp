#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* ptr;   // base class pointer

    Dog d;
    Cat c;

    // Runtime polymorphism
    ptr = &d;
    ptr->sound();   // calls Dog's sound()

    ptr = &c;
    ptr->sound();   // calls Cat's sound()

    return 0;
}
