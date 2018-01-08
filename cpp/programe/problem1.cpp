#include<iostream>
using namespace std;
int fun(const int &i)
{
//	i=100;
}
//int foo(int=0,int=0,char*);
int f()
{
	int ll=88;
	return ll;
}
void foo(const char *j,...)
{
	cout<< j[1]<<endl;
}
int main()
{
	int x=5;
	 int *const p=&x;
	*p=88;
	//p=&x;
	int w=f();
	cout<<w<<endl;
	int arr[]={1,2,3,4,5,6,7};
	int *l=&arr[2];
	int *q=&arr[4];
	cout<<q-l<<endl;
	foo("hbh");
	fun(x);
	cout<<x;
	printf("%c",x["33388981"]);
	return 0;
}
