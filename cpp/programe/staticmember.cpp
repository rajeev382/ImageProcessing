#include<iostream>
using namespace std;
static int dd=89;
class A{
	public:
		static int i;
		 int fun()
		{
			cout<<"vvvv"<<" "<<i<<" ";
		}
};
int A::i=67;


