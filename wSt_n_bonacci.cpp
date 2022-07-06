/*


I/P: m=8  n=3
O/P: 0,0,1,1,2,4,7,13

*/


#include <bits/stdc++.h>

using namespace std;

void nBonacci(int m,int n){
	
	int arr[m]={0};
	arr[n-1]=1;
	arr[n]=1;
	for(int i=n+1;i<m;i++){
		arr[i]=2*arr[i-1]-arr[i-n-1];
	}
	for (int i = 0; i < m; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int n,m;
	cin>>m>>n;
	// int arr[n];
	// for(int i=0;i<n;i++){
	// 	cin>>arr[i];
	// }
	nBonacci(m,n);
	return 0;
}