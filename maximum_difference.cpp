#include <bits/stdc++.h>

using namespace std;

int maximumDifference(int arr[],int n)
{
	int res=arr[1]-arr[0];
	int minValue=arr[0];
	for(int i=1;i<n;i++){
		res=max(res,arr[i]-minValue);
		minValue=min(minValue,arr[i]);
	}
	return res;
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maximumDifference(arr,n);

	return 0;
}


/*
input:	7
		2 3 10 6 4 8 1
output:	8
*/
