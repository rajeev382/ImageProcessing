//============================================================================
// Name        : mergesort.cpp
// Author      : rajeev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
    cout<<low<<" "<<mid<<" "<<high<<endl;
	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{

		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
		cout<<i<<" "<<j<<" "<<k<<" k: "<<temp[k];
	}
    cout<<endl;
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
		cout<<k<<" i<=mid "<<i<<endl;
	}

	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
		cout<<k<<" j<=mid "<<j<<endl;
	}


	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
		cout<<a[i];
	}
	cout<<endl;
}

// A function to split array into two parts.
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{

		mid=(low+high)/2;
		cout<<low<<" ++ "<<mid<<" ++ "<<high<<endl;
		// Split the data into two half.
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);

		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int arr[]={9,2,17,1,11,0,12,4};
	MergeSort(arr, 0, 7);

		// Printing the sorted data.
		cout<<"\nSorted Data ";
		for (int i = 0; i < 8; i++)
	        cout<<"->"<<arr[i];
	return 0;
}
