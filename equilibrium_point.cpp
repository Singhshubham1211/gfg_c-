


#include <bits/stdc++.h>

using namespace std;

bool equilibriumPoint(int arr[],int n){
	int sum=0,lsum=0;
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if(lsum==sum-arr[i]){
			return true;
		}
		lsum+=arr[i];
		sum-=arr[i];
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<equilibriumPoint(arr,n);
	
	return 0;
}