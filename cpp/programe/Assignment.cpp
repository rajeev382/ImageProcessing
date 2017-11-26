#include<iostream>
using namespace std;
class circle{
	int i,j;
	public:
		circle(){
		}
	circle(int a,int b)
	{i=a;
	j=b;}
	
	circle & operator=(circle &c){
	i=c.i;
	j=c.j;
	return *this;
	}
	void change(int &a)
	{i=a;
	}
	void display()
	{
		cout<<i<<" "<<j<<endl;
	}
};
int main()
{
	int g=88,f=55;
	circle c1(8,9),c2,c3;
	c3=c2=c1;
	c1.change(g);
	c3.display();
	c3.change(f);
	c1.display();
	return 0;
}
