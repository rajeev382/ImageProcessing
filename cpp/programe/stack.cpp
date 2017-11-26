#include<iostream>
using namespace std;
class stack
{
	int *p=0;
	int size=0;
	public:
		stack()
		{}
	void push(int i)
	{   int *q=new int [++size];
		
		for(int j=0;j<size;j++)
		    q[j]=p[j];
		delete[] p;
		p=q;
		p[size]=i;
		
		}	
	int pop(){
		
	return p[size--];
	}
		
	
};
int main()
{
	stack ss;
	ss.push(3);
	return 0;
}
