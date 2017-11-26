#include<iostream>
#include<cstring>

using namespace std;
 
bool comp(char arr1[], char arr2[])
{
    for (int i=97; i<122; i++)
        {if (arr1[i] != arr2[i])
            return false;
			cout<<"compp "<<endl;}
    return true;
}
 
int search(int *p, int *s,int N,int M)
{
    int xor1=0,xor2=0;
	int count=0;
	cout<<"searchhhh"<<endl;
    char Pattern[122] = {0}, txt[122] = {0};
    for (int i = 0; i < M; i++)
    {
       // (Pattern[p[i]])++;
        xor1=xor1^p[i];
        //(txt[s[i]])++;
        xor2=xor2^s[i];
        cout<<"loop1"<<endl;
    }
    for (int i = M; i < N; i++)
    {
        if (xor1==xor2)
            count++;
        //(txt[s[i]])++;
         xor2=xor2^s[i];
        //txt[s[i-M]]--;
        xor2=xor2^s[i-M];
        
    }
 
    if (xor1==xor2)
        count++;
		
return count;
}
 
/* Driver program to test above function */
int main()
{  long n;
   
   int p[] = {1,3,5};
    int s[]={1,4,5,1,5,1,3,5};

    cout<<endl<<search(p, s,sizeof(s),sizeof(p));
    return 0;
}
