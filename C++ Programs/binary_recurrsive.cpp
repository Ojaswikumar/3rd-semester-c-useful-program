#include<bits/stdc++.h>
//binary_search_using_recurrsion
using namespace std;
int binary(int arr[],int l,int r,int x)
{
    if(r>=1)
    {
        int mid = (l+(r-1))/2;
        if(arr[mid]==x)
         return mid;
        else if(arr[mid]>x)
         return binary(arr,l,mid-1,x);
        else
         return binary(arr,mid+1,r,x);      
    } 
    return -1;
} 
int main()
{
    int arr[] = {2,3,4,5,6,7,8};
    int x = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binary(arr,0,n-1,x);
    if(result == -1)
     cout<<"Element is not present";
    else
     cout<<"Element is present";
    return 0;
}