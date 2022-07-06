#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int l,int m,int h){
    int n1=m-l+1;
    int n2=h-m;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i]=arr[l+i];

    }
    for (int i = 0; i < n2; i++)
    {
        right[i]=arr[m+i+1];
        
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;k++;
        }
        else{
            arr[k]=right[j];
            j++;k++;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;}
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;  }

}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main()
{
    int arr[5]={10,5,30,15,7};
    mergeSort(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}