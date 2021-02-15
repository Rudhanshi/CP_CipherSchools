//Complexity = O(n)

#include<iostream>
using namespace std;

int maxSubArraySum(int a[], int n)
{
int MaxSoFar = a[0];
int currSum = a[0];

for (int i = 1; i < n; i++)
{
		currSum = max(a[i], currSum+a[i]);
		MaxSoFar = max(MaxSoFar, currSum);
}
return MaxSoFar;
}


int main()
{
int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
int n = sizeof(a)/sizeof(a[0]);
int max_sum = maxSubArraySum(a, n);
cout << "Maximum contiguous sum is " << max_sum;
return 0;
}
