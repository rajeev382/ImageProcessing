//============================================================================
// Name        : recur.cpp
// Author      : rajeev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void abc(char *s)
{
    if(s[0] == '\0')
        return;

    abc(s + 1);
    cout<<" k "<<s[0]<<endl;
    abc(s + 1);
    cout<<"----"<<endl;
    cout<<s[0]<<endl;
}
int fun(int x, int y)
{
    if (y == 0)   return 0;
    cout<<x<<" x:y "<<y<<endl;
    return (x + fun(x, y-1));
}

int fun2(int a, int b)
{
    if (b == 0) return 1;
    cout<<a<<" a:b "<<b<<endl;
    return fun(a, fun2(a, b-1));
}
int f(int n,char *s)
{
	cout<<"-- " <<n<<s<<endl;
    if(n <= 1)
        return 1;
    return f(n/2,"abc") + f(n/2,"def");}
void get (int n)
{
   if (n < 1) return;
   get(n-1);
   get(n-3);
   cout<<n;
}
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	char s[]="abc";
	//abc(s);
	//fun2(2,5);
	//cout<<f(11,"gji");
	get(6);
	return 0;
}

