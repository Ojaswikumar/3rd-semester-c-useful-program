#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
} 
void bubblesort(int arr[],int n)
{
	int i,j,k=1;
	for(i = 0;i<n-1;i++)
	{
		for(j = 0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		} 
		k++;
	} 
	cout<<"No of passes is:"<<k<<endl;
} 
void print(int arr[],int size)
{
	int i;
	for(i = 0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	} 
	cout<<endl;
}
int main()
{
	int arr[] = {1,2,89,99,67,90};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	cout<<"Sorted array is:"<<endl;
	print(arr,n);
	return 0;
	
}
