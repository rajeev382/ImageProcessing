//============================================================================
// Name        : Permutation.cpp
// Author      : rajeev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;
static int k=0;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
    //cout<<" y: "<<*y<<" x: "<<*x<<endl;
}

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int l, int r)
{k++;
   int i;
   if (l == r)
     cout<< a<<endl;
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          cout<<" i:"<<i<<" :l "<<l<<endl;
          permute(a, l+1, r);
          cout<<"pout"<<" i: "<<i<<" l: "<<l<<endl;
          swap((a+l), (a+i)); //backtrack
       }
       cout<<k<<endl;
   }
}

/* Driver program to test above functions */
int main()
{
    char str[] = "ABCD";
    int n = strlen(str);
    permute(str, 0, n-1);
    cout<<k;
    return 0;
}
