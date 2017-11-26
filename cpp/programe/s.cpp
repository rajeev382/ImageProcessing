#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
#define MAX 3
#define MIN 4
class A
{
	int j;
	int *p;
	public:
		A(){
			p=new int;
			cout<<endl<<"constructor ";
		}
		A(int s)
		{
			j=s;
		}
		A(const A &a)
		{
		}
    void fun()const
	{
		cout<<j<<endl;
	}
};
    
int main(){
	int (*p)[MAX];
	p=new int[MAX][MAX];
	cout<<sizeof(p);
	A a;
	int **pp,i,j;
	pp=new int*[MAX ];
	pp[0]=new int[MAX *MIN *sizeof(int)];
	for(i=0;i<MAX;i++)
	  pp[i]=pp[0]+i*MAX;
    A gg(8);
	const	A cc(7);
	cc=gg;
	cc.fun();
	;
	return 0;
}
