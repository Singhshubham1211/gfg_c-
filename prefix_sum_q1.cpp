/*
Given a fixed array and multiple quaries of following types on
the array, how to efficiently program these queries

I/P: arr[]= 2,8,3,9,6,5,4
	 queries : getsum(0,2)
	 		   getsum(1,3)
	 		   getsum(2,6)

O/P: 13 20 27
*/

/*


I/P: m=8  n=3
O/P: 0,0,1,1,2,4,7,13

*/


#include <bits/stdc++.h>

using namespace std;

int prefixsum[10000]; 

void prefixSum(int arr[],int n){
	
	prefixsum[0]=arr[0];
	for (int i = 1; i < n; i++)
	{
		prefixsum[i]=prefixsum[i-1]+arr[i];

	}
}


int getSum(int prefixsum[],int l,int r){
	if(l!=0){
		return prefixsum[r]-prefixsum[l-1];
	}else{
		return prefixsum[r];
	}
}

int main()
{
	int n,l,r;
	cin>>n>>l>>r;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	prefixSum(arr, n);
	cout<<getSum(prefixsum, l, r);
	return 0;
}