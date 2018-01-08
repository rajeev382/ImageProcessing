#include<iostream>
using namespace std;
void fun(int i=8,int j=4,int k=3)
{
	cout<<i<<j<<k<<endl;
}
void foo()
{cout<<"helo"<<endl;
}
void fun2(int,float);
void foo1(int =21,int =23,int =11);
void foo1(int,int);

void foo1(int d,int hh,int kk)
{cout<<d<<hh<<kk<<endl;
}
void foo1(int e,int a)
{cout<<e<<a<<endl;
}

int main()
{   

//Q1
	fun(2,99);
	//Q2
	foo();
	//Q3
	void f1();
	void f2();
	f1();
	//Q4
	//fun2(1);
	//Q5
	foo1(1,3,9);
	//Q6
	volatile int hll=9;
	hll=67;
	cout<<hll<<endl;
	return 0;
	
}

void fun2(int j=99,float jj=2.4)
{cout<<j<<endl;
}
void f1()
{//f2();
}
void f2()
{cout<<"f2"<<endl;
}
