#include <bits/stdc++.h>

using namespace std;

int maxConsecutiveOnes(int arr[],int n){
	int res=0;
	int curr;
	for (int i = 0; i < n; i++)
	{
		if(arr[i]==0){
			curr=0;
		}else{
			curr++;
			res=max(curr,res);
		}
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
	cout<<maxConsecutiveOnes(arr,n);
	return 0;
}