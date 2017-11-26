#include <iostream>
using namespace std;

class A
{
	public:
	A()
 {
  cout << "Constructor called";
 }

public: 
~A()
 {
  cout << "Destructor called";
 }
    public:
    virtual void show()
    {
        cout << "Base class\n";
    }
    private:
     void d()
    {
        cout << "Base class\n";
    }
};

class B: public A
{
public:
	B()
 {
  cout << "Constructor B called";
 }

public:
 ~B()
 {
  cout << "Destructor B called";
 }
private:
 void show()
    {
        cout << "Derived class\n";
    }
};

int main()
{
    A *a;
    B b;
    
    
    a = &b;
    a -> show(); 
}
