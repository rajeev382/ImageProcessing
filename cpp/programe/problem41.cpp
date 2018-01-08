#include<iostream>
using namespace std;
int& fun(int &f)
{  int h=&f;
	f=22234;
	return h;
}
int main()
{
	int j=23;
	fun(j);
	cout<<j;
}
