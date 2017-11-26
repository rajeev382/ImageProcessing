#include<iostream>
using namespace std;
class A
{
	int k=9;
	public:
	void fun(A &h);
	friend void f();
};
void A::fun(A &h)
{
	cout<<"cscc"<<h.k;
	//void f();
}
void f()
{
	
	int h=7;
cout<<"cdc";

	//void fun1();
}
void fun1()
{
	public:
	cout<<"vrv";
}
int main()
{
	A a,b;
	a.fun(a);
	//f();
	fun1();
	return 0;
}
