//Complexity = O(logn)
#include <bits/stdc++.h>
using namespace std;


int findPeakHelper(int arr[], int start,
				int end, int n)
{
	
	int mid = start + (end - start) / 2;

	
	if ((mid == 0 || arr[mid - 1] <= arr[mid]) && 
		(mid == n - 1 || arr[mid + 1] <= arr[mid]))
		return mid;

	
	else if (mid > 0 && arr[mid - 1] > arr[mid])
		return findPeakHelper(arr, start, (mid - 1), n);

	
	else
		return findPeakHelper(
			arr, (mid + 1), end, n);
}


int findPeak(int arr[], int n)
{
	return findPeakHelper(arr, 0, n - 1, n);
}


int main()
{
	int arr[] = { 1, 3, 20, 4, 1, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Index of a peak point is " << findPeak(arr, n);
	return 0;
}


