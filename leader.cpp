#include <bits/stdc++.h>

using namespace std;

void leader(int arr[],int n)
{
	int curr_ldr=arr[n-1];
	cout<<curr_ldr<<" ";
	for (int i = n-2; i >= 0; i--)
	{
		if (arr[i]>curr_ldr)	
		{
			cout<<arr[i]<<" ";
			curr_ldr=arr[i];
		}
	}
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	leader(arr,n);
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<'\t';
	// }
}


//the ouput is in reverse order
/*
ip : 	7
		7 10 8 10 4 3 2
op :	2 3 4 10 