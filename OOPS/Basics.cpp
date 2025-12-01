#include <iostream>
using namespace std;

class Animal
{
    // Access Modifier->Public,private,protected
private: // By default
    int weight;

public:
    // State Properties
    int age;
    string name;

    // behaviour = method = function
    void eat()
    {
        cout << "Ramesh Is eating" << endl;
    }
    void bark()
    {
        cout << "Ramesh bark also:" << endl;
    }

    // Getter and setter is used with private to get value as in private modifier we can't assign value outside the functions so we use get and set
    int getweight()
    {
        return weight;
    }
    void setweight(int w)
    {
        this->weight = w;
    }
};

int main()
{
    // Object Creation

    // Static
    Animal ramesh;
    // ramesh.age = 15;
    // ramesh.name = "Suresh";
    // cout << "Age of ramesh is: " << ramesh.age << endl;
    // cout << "Name of ramesh is: " << ramesh.name << endl;

    // ramesh.eat();
    // ramesh.bark();

    // ramesh.setweight(101);
    // cout << "Weight of ramesh is: " << ramesh.getweight();

    // Dynamic Memory Allocation
    Animal *Mohit = new Animal;
    (*Mohit).age = 21;
    (*Mohit).name = "Yadav";
    cout << "Mohit age is: " << (*Mohit).age << endl;
    cout << "Mohit full name is:Mohit " << (*Mohit).name << endl;

    // Alternate Dynamic
    Mohit->age = 22;
    Mohit->name = "Gopal Yadav";
    cout << "Mohit age is: " << (*Mohit).age << endl;
    cout << "Mohit full name is:Mohit " << (*Mohit).name << endl;

    Mohit->eat();
    Mohit->bark();
}