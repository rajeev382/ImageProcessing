#include<iostream>
using namespace std;
int &f()
{  
    int p=88;
	return p;
}
struct emp{
	char name[20];
	int age;
	int sal;
}e3;
emp e1={"AA",53,764};
emp e2={"BB",7,888};

emp &fun();
emp &fun()
{
	e3.name;
	e3.age=3;
	e3.sal=123;
	return e3;
}
void foo(int r,int u=5){
}
int main()
{
	int i=6;
	int &j=i;
	int &k=j;
	int &l=i;
	cout<<i<<j<<k<<endl;
	//Q2
	int a=896776228;
	long int h=8967762289;
	a=h;
	cout<<a<<endl<<h<<endl;
	//Q3
	char *s="HHHHH";
	s="lI";
	//*s='G'; wrong  Runtime error
	cout<<s<<endl;
	//Q4
	char ss[]="HHHHH";
	//ss="lI";  wrong Runtime error
	*ss='G';
	cout<<ss<<endl;
	//Q5
	const int *u;
	//*u=98;
	u=&i;
	cout<<u<<endl;
	//Q6
	cout<<f()<<endl;
	//Q7
	fun()=e2;
	cout<<e3.age<<endl;
	//Q8
	char *pp="LLL",*&qq=pp;
	cout<<qq<<" "<<pp<<endl;
	qq="jjkj";
	cout<<qq<<" "<<pp<<endl;
	//Q9
	int s1=80,s2=90;
	int *p1=&s1,*p2=&s2,&r1=s1,&r2=s2;
	int arr[]={*p1,*p2};
	int arr2[]={r1,r2};
	cout<<*arr<<" "<<*(arr2+1)<<endl;
	//Q10
	foo(3);
	return 0;
}
