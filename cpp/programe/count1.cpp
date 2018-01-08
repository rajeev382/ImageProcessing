/*
// Sample code to perform I/O:

scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
int main()
{
    int i,j,b,n,k,count,max;
    int p,q,r;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("------- \n");
    for(j=0;j<k;j++)
       {
           
           scanf("%d",&p);
           if(p==2){
               printf("%d - %d \n",p,j);
           //scanf("%d",&q);
           scanf("%d",&r);
           arr[r-1]=1;
           count=0;
           max=0;
           for(b=0;b<n;b++)
              {if(arr[b]==1)
                  count++;
               else
                  {if(max <count)
                      max=count;
                      count=0;
                  }
              }
              printf("result %d \n",max);
               
           }
       }
    return 0;
}

