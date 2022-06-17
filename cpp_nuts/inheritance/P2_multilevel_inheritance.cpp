//   Multilevel Inheritance
//   Child Class with a Parent Class who has its own parent classes.


// BlueCat goes through multilevel inheritance.

class Animal{};

class Cat : public Animal{};

class BlueCat: public Cat {};

int main(){

    return 0;
}