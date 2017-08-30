/*
Virtual Destructor

Deleting a derived class object using a pointer to a base class that has a non-virtual destructor results in undefined behavior. To correct this situation, the base class should be defined with a virtual destructor. For example, following program results in undefined behavior.
// CPP program without virtual destructor 
// causing undefined behavior
#include<iostream>
 
using namespace std;
 
class base {
  public:
    base()     
    { cout<<"Constructing base \n"; }
    ~base()
    { cout<<"Destructing base \n"; }     
};
 
class derived: public base {
  public:
    derived()     
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
};
 
int main(void)
{
  derived *d = new derived();  
  base *b = d;
  delete b;
  getchar();
  return 0;
}

Although the output of following program may be different on different compilers, when compiled using Dev-CPP, it prints following:

Constructing base
Constructing derived
Destructing base

Making base class destructor virtual guarantees that the object of derived class is destructed properly, i.e., both base class and derived class destructors are called. For example,*/
include<iostream>
 
using namespace std;
 
class base {
  public:
    base()     
    { cout<<"Constructing base \n"; }
    virtual ~base()
    { cout<<"Destructing base \n"; }     
};
 
class derived: public base {
  public:
    derived()     
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
};
 
int main(void)
{
  derived *d = new derived();  
  base *b = d;
  delete b;
  getchar();
  return 0;
}
