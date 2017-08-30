#include<iostream>
class RootInterface{
public :
    virtual int common_func() = 0;
    virtual ~RootInterface(){}
};

class Interface1 : public virtual RootInterface{
public:
    virtual ~Interface1() {};
};

class Interface2 : public virtual RootInterface{
    public:
    virtual int new_func() = 0;
    virtual ~Interface2() {};
};

class InterimClass : public Interface1 {
    public:
    virtual int common_func() {
        return 10;
    }
};

class MostDerivedClass : public InterimClass, public Interface2 {
public:
    virtual int new_func() {
        return 20;
    }
};
int main()
{
Interface1 * i1 = new MostDerivedClass;
    int x = i1->common_func();
    cout << "The value = " << x << endl;

    Interface2 * i2 = new MostDerivedClass;
    x = i2->common_func();
}
