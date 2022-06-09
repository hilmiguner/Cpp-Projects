#include <iostream>
using namespace std;

class Engine
{
    private:
        string model;
    public:
        ~Engine()
        {
            cout<<"Destroying the engine..."<<endl;
        }
};

class Car
{
    private:
        Engine engine;
    public:
        ~Car()
        {
            cout<<"Destroying the car..."<<endl;
        }
};

int main()
{
    Car car;
    return 0;
}