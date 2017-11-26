#include<iostream>
using namespace std;
struct nam{
	name(){cout<<"const struct";
	}
	int k=9;
    public:
		void fun(struct nam& a){
	cout<<a.k;
	}
	
	private:
		int i=4;
};
int main()
{
	struct nam  p;
//	cout<<p.i;
	p.fun(p);
	return 0;
}
