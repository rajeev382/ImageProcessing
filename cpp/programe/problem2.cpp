#include<iostream>
using namespace std;
class A{
	int h=8;
	public:
		A(int j=9){
			h=j;
		}
		void f(){
			cout<<h<<endl;
		}
		virtual void g()=0;
};
struct h{
	int k;
	void foo()
	{
		cout<<"jnjb";
	}
};
void hk(int h)
{
	cout<<"njnj";
}
void hk(int,int);
void hk(int,int);
const int ff=76;
int main()
{
	hk(5);
	struct h *i;
	i->foo();
	char ss[]="kkokoo";
	char *pp=&ss[1];
	*ss='l';
	*pp='m';
	bool g;
	g=34<87;
	cout<<endl<<g<<endl;
	int b=false;
	bool j=76;
	int ff=9;
	{
		const int ff=56;
		cout<<endl<<" -- "<<ff<<"---"<<::ff<<endl<<sizeof('jnjnjjhbhbjh')<<endl<<sizeof("jnjnjjhbhbjh")<<endl;
	}
	
	cout<<endl<<b<<"\n"<<j<<endl;
	/*
	char *ss="kkokoo";
	char *&pp=ss;
	*ss='l';
	*pp='m';
	*/
     cout<<ss;
	int n,f=77;
	n=(long)f;
	void *p;
	char s[]="fd";
	//p=(void *)s;
	//cout<<*p;
		cout<<n<<endl;
	//A aa;
	//aa.f();
	return 0;
	
}
