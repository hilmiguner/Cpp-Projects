#include <iostream>
using namespace std;

class Car
{
    public:
        ~Car()
        {
            cout<<"Destroying the car..."<<endl;
        }
};

class Person
{
    Car *car;
    public:
        Person(Car *car)
        {
            this->car = car;
        }
        ~Person()
        {
            cout<<"Destroying the person..."<<endl;
        }
};

int main()
{
    Car *car = new Car;
    Person person(car);
}