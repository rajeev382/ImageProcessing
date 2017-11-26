#include<iostream>
using namespace std;
int devil(int *arr,int size)
{
    int i,j,temparr[size];
    for(i=0;i<size-1;i++)
       {for(j=i+1;j<size;j++)
          {if(arr[i]>arr[j])
              arr[j]=-1;
          else
             {
			 cout<<i<<" "<<j<<endl;
			 i=j;
			 break;
			 }}}
    
}
int main()
{
    
    int i,j,numberofdevil;
    scanf("%d",&numberofdevil);
    int arr[numberofdevil];
    for(i=0;i<numberofdevil;i++)
       scanf("%d",&arr[i]);
    devil(arr,numberofdevil);
    for(j=0;j<numberofdevil;j++)
       {if(arr[j]>=0)
            cout<<arr[j];
       }
return 0;
}
