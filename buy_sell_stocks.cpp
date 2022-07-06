#include <bits/stdc++.h>

using namespace std;

int maxProfit(int price[],int n){
	int profit=0;
	for(int i=1;i<n;i++){
		if(price[i]>price[i-1]){
			profit+=(price[i]-price[i-1]);
		}
	}
	return profit;
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxProfit(arr,n);
	return 0;
}