#include <bits/stdc++.h>

using namespace std;

int maxSubarraySum(int arr[],int n){
	int res=arr[0];
	int maxEnding=arr[0];
	for(int i=1;i<n;i++){
		maxEnding=max(maxEnding+arr[i],arr[i]);
		res=max(res,maxEnding);
	}
	return res;
}

int maxCircularSubarraySum(int arr[],int n){
	int normal_max=maxSubarraySum(arr,n);
	if (normal_max<0)
	{
		return normal_max;
	}
	int arr_sum=0;
	for(int i=0;i<n;i++){
		arr_sum+=arr[i];
		arr[i]= -arr[i];
	}
	int circular_max=arr_sum+maxSubarraySum(arr,n);
	return max(normal_max,circular_max);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxCircularSubarraySum(arr,n);
	return 0;
}