#include<stdio.h>
#include <math.h>
int fun(int arr[],int sizearr,int k)
{
    int i,j,count;
    count=0;
    for(i=0;i<sizearr;i++)
          count=count+sqrt((k-arr[i])*(k-arr[i]));
    return count;
}
int main()
{
    int t;
    int  i,j,k,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
       scanf("%d",&k);
       scanf("%d",&n);
       int arr[n];
       printf("*** \n");
       for(j=0;j<n;j++)
         {
		 scanf("%d",&arr[j]);}
		 printf(" **** \n");
       printf(" --- \n %d \n",fun(arr,n,k));
    
    }
}
