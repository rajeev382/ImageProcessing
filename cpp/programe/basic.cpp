#include<iostream>
using namespace std;
class pol
{
	public: int rect(int a,int b)
	{
		return a*b;
	}
  public: int p(int a,int b){
  	return a-b;};
  	virtual int v(int *a,int b)=0;
  
};
class r:public pol{
	public:
		int k()
		{return 0;
		}
		
		int v(int a,int b){
			return a*b;
		}
};

int main()
{

r rr;

cout<<rr.v(2,9);	
}
