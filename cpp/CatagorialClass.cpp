#include<iostream>
#include<string>
using namespace std;
class Category
{
private:
	Subcat **store;	// A similar class, shown below
	string name;
	int size;
public:
	Category(int a,string b, int *x, string *y, string**z)
	{
		size=a;
		name=b;
		store=new *Subcat[a];
		for(int i=0; i < a; i++)
			store[i]=new Subcat(x[i],y[i],z[i]);
	}
	~Category()
	{
		for(int i=0; i<size; i++)
			delete []store[i];
		delete []store;
	}
};

class Subcat
{
private:
	string *store;
	string name;
	int size;
public:
	Subcat(int a, string b, string *c)
	{
		size=a;
		name=b;
		store=new *string[a];
		for(int i=0; i < a; i++)
			store[i]=c[i];
	}
	~Subcat()
	{
		delete []store;
	}
};
int main()
{
    Category c=new Category(2,"ad",3,"dsds","sccs");
    
}

