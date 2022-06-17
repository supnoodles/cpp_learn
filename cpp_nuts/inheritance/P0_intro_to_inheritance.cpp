// derived classes inherit properties of base classes
// i.e. child classes inherit properties of parent classes

/*
TYPES OF INHERITANCE:
1. Single Inheritance
   Child Class with only one Parent Class.
2. Multilevel Inheritance
   Child Class with a Parent Class who has its own parent classes.
3. Multiple Inheritance
   Child Class with more than one Parent Classes.
4. Heirarichal Inheritance
   Multiple Child Classes coming from same Parent Class
5. Hybrid Inheritance 
   Combination of multiple and heirarichal inheritance.
6. Multipath Inheritance
   Child class with two Parent Classes who also have a common Parent Class.

MODES OF INHERITANCE (access specifiers):
1. public (global visibility)
2. protected (visible to current class and parent class only)
3. private (visible to current class only)

-------------------------------------------------------------
PARENT CLASS | CHILD CLASS    CHILD CLASS    CHILD CLASS    |
-------------------------------------------------------------
             | Public MODE    Private MODE   Protected MODE |
-------------------------------------------------------------
Private      | Not Inherited  Not Inherited  Not Inherited  |
Protected    | Protected      Private        Protected      |
Public       | Public         Private        Protected      |
-------------------------------------------------------------
*/

#include <iostream>

using namespace std;

class Animal {
public:
    void eat() { cout << "Eating" << endl; }
    void walk() { cout << "Walking" << endl; }
};

class Dog : public Animal{
public:
    void talk() { cout << "Woof" << endl; }
};

class Cat : public Animal{
public:
    void talk() { cout << "Meow" << endl; }
};

class Dinosaur : public Animal{
public:
    void talk() { cout << "rawr" << endl; }
};

int main(){
    Dog d;
    Cat c;
    Dinosaur di;

    d.talk();
    c.talk();
    di.talk();

    return 0;
}