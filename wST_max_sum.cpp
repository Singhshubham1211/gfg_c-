/*
Given an array of integers and a number k, 
find the maximum sum of concecutive elements

I/P: arr[]= 1,8,30,-5,20,7   k=3  n=6
O/P: 45

*/


#include <bits/stdc++.h>

using namespace std;

int maxSumConsecutive(int arr[],int n,int k){
	int curr_sum=0;
	for(int i=0;i<k;i++){
		curr_sum+=arr[i];
	}
	int max_sum=curr_sum;
	for(int i=k;i<n;i++){
		curr_sum+=(arr[i]-arr[i-k]);
		max_sum=max(max_sum,curr_sum);
	}
	return max_sum;
}

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxSumConsecutive(arr,n,k);
	return 0;
}