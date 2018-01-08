#include<iostream>
#include"staticmember.cpp"
using namespace std;
extern int dd;
int foo(int k)
{
cout<<"cdc";
return 0;
}
void foo(double d)
{
	cout<<"ree";
}
static int ll=2222;
int main()
{
	dd++;
	A gg;
	gg.fun();
	foo(3.3);
	static int ll=23;
	if(1)
	{static int ll=111;
	cout<<::ll;
	}
	cout<<dd;
	return 0;
}
