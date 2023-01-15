#include<bits/stdc++.h>
using namespace std;
void soort(int arr[],int n)
{
    int i,k;
    k = arr[0];
    for(i = 0;i<n;i++)
    {
        k = max(k,arr[i]);
    } 
    int count[10] = {0};
    for(i = 0;i<n;i++)
    {
        count[arr[i]]++;
    } 
    for(i = 0;i<=k;i++)
    {
        count[i]+=count[i-1];
    } 
    int output[n];
    for(i=n-1;i>=0;i++)
    {
        output[--count[arr[i]]] = arr[i];
    } 
    for(i = 0;i<n;i++)
    {
        arr[i] = output[i];
    }
} 
int main()
{
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int n = 9;
    soort(arr,9);
    for(int i = 0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    } 
    return 0;
}