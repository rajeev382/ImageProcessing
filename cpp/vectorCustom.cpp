#include<iostream>
using namespace std;

class Vector
{
int size;
int capacity;
int *p;
Vector()
{
size=0;
capacity=0;
}
void push_back(int &l)
{
capacity++;
if(size>=capacity)
 { int *pp=new int[capacity];
  for(int j=0;j<size;j++)
    pp[j]=*p[j];
 pp[j]=l; 
 }
else
  pp[++size]=l;

}
};

int main()
{
Vector v;
v.push_back(2);
}
