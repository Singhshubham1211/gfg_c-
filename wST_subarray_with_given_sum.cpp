/*
Given an unsorted array of non-negative integers. 
find if there is a subarray with given sum.

I/P: arr[]= 1,4,20,3,10,5   sum=33  n=6
O/P: 45

*/


#include <bits/stdc++.h>

using namespace std;

int maxSumConsecutive(int arr[],int n,int sum){
	int curr_sum=arr[0];
	int s=0;
	for(int e=1;e<n;e++){
		while(curr_sum>sum && s<e-1){
			curr_sum-=arr[s];
			s++;
		}
		if(curr_sum==sum){

			return 1;
		}
		if(e<n){
			curr_sum+=arr[e];
		}
	}
	return 0;
}

int main()
{
	int n,sum;
	cin>>n>>sum;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxSumConsecutive(arr,n,sum);
	// cout<<"YES";
	// }
	// else{cout<<"NO";}
	return 0;
}