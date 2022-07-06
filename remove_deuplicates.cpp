#include <bits/stdc++.h>

using namespace std;

int removeDuplicate(int arr[],int n)
{
	int res=1;
	for (int i = 0; i < n; i++)
	{
		if(arr[i]!=arr[res-1]){
			arr[res]=arr[i];
			res++;
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
	n=removeDuplicate(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<'\t';
	}
}