#include<bits/stdc++.h>
using namespace std;
int Getmax(int arr[],int n)
{
    int max = arr[0];
    for(int i = 1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    } 
    return max;
} 
void countingsort(int arr[],int size,int div)
{
    int output[size];
    int count[10] = {0};
    for(int i = 0;i<size; i++)
    {
        count[(arr[i]/div)%10]++;
    }
    for(int i = 0;i<10; i++)
    {
        count[i]+=count[i-1];
    } 
    for(int i = size-1;i>=0;i--)
    {
        output[count[(arr[i]/div)%10]-1]=arr[i];
        count[(arr[i]/div)%10]--;

    }  
    for(int i = 0;i<size;i++)
    {
        arr[i]=output[i];
    } 


}
void radixsort(int arr[],int size)
{
    int m = Getmax(arr,size);
    for(int div = 1;m/div>0;div*=10)
    {
        countingsort(arr,size,div);
    }
}
int main()
{
    int arr[] = {1,4,4};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    radixsort(arr,size);
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    } 
    return 0;
}