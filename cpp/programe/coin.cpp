#include<iostream>
#include<string.h>
using namespace std;
int count( int S[], int m, int n )
{
    // table[i] will be storing the number of solutions for
    // value i. We need n+1 rows as the table is consturcted
    // in bottom up manner using the base case (n = 0)
    int table[n+1];
 
    // Initialize all table values as 0
    memset(table, 0, sizeof(table));
 
    // Base case (If given value is 0)
    table[0] = 1;
 
    // Pick all coins one by one and update the table[] values
    // after the index greater than or equal to the value of the
    // picked coin
    for(int i=0; i<m; i++)
        {
		for(int j=S[i]; j<=n; j++)
           {
			 table[j] += table[j-S[i]];
        }for(int k=0;k<=n;k++)
           cout<<table[k];
        cout<<endl;}
    return table[n];
}
int main()
{
   int arr[] = {7,2,3,6};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 13;
    printf(" %d ", count(arr, m, n));
    return 0;

}

