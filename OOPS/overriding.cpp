#include <iostream>
using namespace std;
class Animal
{
public:
    void speak()
    {
        cout << "Speaking";
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking";
    }
    void speak()
    {
        cout << "Speak dog method";
    }
};
int main()
{
    Dog *d1 = new Dog();
    d1->speak();
    Animal a1;
    a1.speak();
}