#include<bits/stdc++.h>
using namespace std;


int lpartition(int arr[],int l,int h){
    int i=l-1;
    int pivot=arr[h];
    for (int j = l; j < h; j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[i+1],arr[h]);
    return i+1;
    
}

int kthelement(int arr[],int n,int k){
    int l=0;
    int h=n-1;
    while (l<=h)
    {
        int p = lpartition(arr,l,h);
        
        if(p==k-1){
            return p;
        }
        else if (p>k-1)
        {
            h=p-1;
        }
        else
        {
            l=p+1;
        }
        
        
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<arr[kthelement(arr,n,k)];
    return 0;
}