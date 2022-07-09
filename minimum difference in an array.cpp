#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
    int mini=INT_MAX;
    if (n==1)
    {
        cout<<mini;
        return 0;
    }
    if(n==2){
        cout<<abs(arr[0]-arr[1]);
        return 0;
    }
    
    sort(arr,arr+n);
    for (int i = 1; i < n; i++)
    {
        mini=min(mini,arr[i]-arr[i-1]);
    }
    
    cout<<mini<<" ";
    return 0;
}