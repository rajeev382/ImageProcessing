#include<iostream>
using namespace std;
int y;
void fun(int h){
	//cout<<h;
}
void copy_restore(int );
void calling_procedure() ;

void calling_procedure() 
{
   y = 10;     
   copy_restore(y); //l-value of y is passed
   cout<<y; //prints 99 
}
void copy_restore(int x) 
{     
   x = 99; // y still has value 10 (unaffected)
   //y = 8; // y is now 0 
}
int main()
{
	int  j=3;
	fun(j+4);
	calling_procedure(); 
	//cout<<&j<<endl;
	for(int k=0;k<j;k++){
	
	if(j==3)
	{
		int i=5;
		//cout<<&i<<endl;
		//cout<<&j<<endl;
		
	}
	else
	{
	
		j=2;
	   	//cout<<&j<<endl;
	}}
}
