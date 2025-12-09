#include <iostream>
using namespace std;
class Animal
{
public:
    string name;
    int age;

    void eat()
    {
        cout << "Eating" << endl;
    }
};
class Dog : public Animal
{
};

int main()
{
    Animal a1;
    a1.eat();
    Dog *d1 = new Dog();
    d1->eat();
}