// C++ program to implement Binary Search Algorithm.
// array must be sorted.

#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		
		if (arr[m] == x)
			return m;

		
		if (arr[m] < x)
			l = m + 1;

		
		else
			r = m - 1;
	}

	
	return -1;               
}

int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x;

    cout<<"Enter x :";
    cin>>x;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<binarySearch(arr, 0, n - 1, x);
	
	return 0;
}
