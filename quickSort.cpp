#include <iostream>
#include <vector>


using namespace std;

// void swap(int a,int b){
//     int temp =a;
//     a=b;
//     b=temp;
// }

int lpartition(int arr[],int l,int h){
    int i=l-1;
    int j=l;
    int pivot= arr[h];
    for (j = l; j < h; j++)
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

void quickSort(int arr[],int l,int h){
    if(l<h){
        int p=lpartition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}


int main()
{
    int arr[]={8,4,7,9,3,10,5};
    int l=0;
    int h=6;
    quickSort(arr,l,h);
    for (int i = 0; i <= h; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}