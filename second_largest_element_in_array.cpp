#include<bits/stdc++.h>

using namespace std;

int secondLargest(int arr[],int n)
{
    int seclargest=-1;
    int largest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[largest]){
            seclargest=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(arr[i]>arr[seclargest]){
                seclargest=i;
            }
        }
    }
    return seclargest;
}

int main()
{
    int arr[]={10,12,7,25,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<arr[secondLargest(arr,n)];
}