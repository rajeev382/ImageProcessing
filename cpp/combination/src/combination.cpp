#include<iostream>

using namespace std;

// A function to print all combination of a given length from the given array.
void Combination(int a[], int reqLen, int start, int currLen, bool check[], int len)
{
	// Return if the currLen is more than the required length.
	if(currLen > reqLen)
	return;
	else if (currLen == reqLen)
	{
		cout<<"\t";
		for (int i = 0; i < len; i++)
		{
			if (check[i] == true)
			{
				cout<<a[i]<<" ";
			}
		}
		cout<<"\n";
		return;
	}
	if (start == len)
	{
		return;
	}
	check[start] = true;
	cout<<check[0]<<check[1]<<check[2]<<check[3]<<check[4]<<endl;
	cout<<reqLen<<" "<<start<<" "<<currLen<<endl;
	Combination(a, reqLen, start + 1, currLen + 1, check, len);
	cout<<"check=false"<<endl;
	check[start] = false;
	cout<<check[0]<<check[1]<<check[2]<<check[3]<<check[4]<<endl;
	Combination(a, reqLen, start + 1, currLen, check, len);
	cout<<"-----conbimation-----"<<endl;
}

int main()
{
	int i, n;
	bool check[n];
	n=5;

	int arr[n]={2,7,1,5,4};
	cout<<"\n";

	// Take the input of the array.
	for(i = 0; i < n; i++)
	{

		check[i] = false;
	}

	// For each length of sub-array, call the Combination().
	for(i = 1; i <= n; i++)
	{
		cout<<"\nThe combination of  length "<<i<<" for the given array set:\n";
		Combination(arr, i, 0, 0, check, n);
	}
	return 0;
}
