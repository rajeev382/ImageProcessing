#include<iostream>
using namespace std;
static  int foo;

class A{
	int g=99;
	int *p;
	public:
	
	 virtual void fun()
	{
		cout<<"AA ";
	}
	 //friend void f(A&,B&);
};
class B:public A
{
	int j=9;
	public:
	void fun(){
		cout<<"BB";
	}
	//friend void f(A&,B&);
};
//void f(A& a,B &b){
//	cout<<b.j;
//}
/* Compile code without optimization option */
class Test
{
    int *ptr;
public:
    Test (int i = 0)      { ptr = new int(i); }
    void setValue (int i) { *ptr = i; }
    void print()          { cout << *ptr << endl; }
    //Test & operator = (const Test &t);
};
 
//Test & Test::operator = (const Test &t)
//{
   // Check for self assignment
//   if(this != &t)
//     *ptr = *(t.ptr);
 
//   return *this;
//}
int main(void)
{
	
	A *s= new B;
	s->fun();
	B *e=dynamic_cast<B*>(s);
	e->fun();
	//bb.fun(5,4);
	//A aa;
	//f(aa,bb);
Test t1(5);
    Test t2;
    t2 = t1;
    t1.setValue(10);
    t2.print();
    t1.print();
}
