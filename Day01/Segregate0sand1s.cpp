//Complexity = O(n)

#include <bits/stdc++.h> 
using namespace std; 


void segregate0and1(int arr[], int size) 
{ 
	int zt = 0; 
	int ot = size - 1; 
	
	while(zt < ot) 
	{ 
		if(arr[zt] == 1) 
		{ 
			swap(arr[zt], arr[ot]); 
			ot--; 
		} 
		else
		zt++; 
	} 
} 


int main() 
{ 
	int arr[] = {0, 1, 0, 1, 1, 1}; 
	int i, arr_size = sizeof(arr) / sizeof(arr[0]); 

	segregate0and1(arr, arr_size); 

	cout << "Array after segregation is "; 
	for (i = 0; i < arr_size; i++) 
		cout << arr[i] << " "; 

	return 0; 
} 
