#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		bool flag=false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				flag=true;
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		if (flag==false)
			break;
		
	}
}

int main(int argc, char const *argv[])
{
	int arr[]={5,6,3,8,9,1};
	bubbleSort(arr,6);
	for (int i = 0; i < 6; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}