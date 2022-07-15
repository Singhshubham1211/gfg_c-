#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>m;  //number of children

    sort(arr,arr+n);
    int diff=INT_MAX;
    for (int i = m-1; i < n; i++)
    {
        diff=min(diff,arr[i]-arr[i-m+1]);
    }
    cout<< diff;
    
    
    return 0;
}