#include<iostream>
using namespace std;
class A{
	A(){
		}
	public:
		
		virtual void fun()=0;
};
class B{
	int i,j;
	public:
		B(){
		}
		B(int a,int b){
			i=a;
			j=b;
		}
		B& operator=(B &bb)
		{
			cout<<"vdvd";
			i=bb.i;
			j=5656;
		  return *this;	
		}
		void print()
		{cout<<i<<j<<endl;
		}
};
void fun1(int &f)
{
	f=99;

}

int main()
{//Q1
//	A a;

//Q2
B b1(2,4);
B b2;
b2=b1;
b2.print();
b1.print();
//Q3
int c=8;
//cout<<fun1(c)<<c<<endl;
	return 0;
}
