#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[],int l,int h){
	while(l<h){
		swap(arr[l],arr[h]);
		l++;
		h--;
	}
}

void leftRotate(int arr[],int n,int d)
{
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}


int main()
{
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	leftRotate(arr,n,d);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<'\t';
	}
}


/*test case :
ip:	arr[]=1,2,3,4,5
	d=2

op: 3,4,5,1,2
``*/
