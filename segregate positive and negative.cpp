#include<bits/stdc++.h>
using namespace std;

// void segPosNeg(int arr[],int n){   //two pointer approch implementation
//     int i=0,j=0;
//     while (j<n)
//     {
//         if(arr[j]<0){
//             swap(arr[i],arr[j]);
//             i++;
//             j++;
//         }
//         else{
//             j++;
//         }
//     }
    
// }

void segPosNeg(int arr[],int n){  //hoare partition approach
    int i=-1,j=n;
    while (true)
    {
        do{
            i++;
        }while(arr[i]<0);

        do
        {
            j--;
        } while (arr[j]>=0);
        
        if (i>=j)      //loop breaking condition
        {
            return;
        }

        swap(arr[i],arr[j]);
        
    }
    
}


int main()
{
    int arr[5]={12,-13,18,-10,-5};
    segPosNeg(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}