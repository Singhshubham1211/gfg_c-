#include<bits/stdc++.h>
using namespace std;


void sort(int arr[],int n){
    int l=0,h=n-1,mid=0;
    while (mid<=h)
    {
        if(arr[mid]==0){
            swap(arr[mid],arr[l]);
            l++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[h],arr[mid]);
            h--;
        }
    }
    
}

int main()
{   
    int arr[6]={0,1,0,2,1,2};

    sort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}