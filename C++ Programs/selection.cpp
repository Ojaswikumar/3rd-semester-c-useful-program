#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
} 

void selectionsort(int arr[],int n)
{
	int i,j,temp,min;
	for(i = 0;i<n-1;i++)
	{
		min = i;
		for(j = i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j;
			} 
		} 
		if (min!=i)
		{
			swap(&arr[min],&arr[i]);
		}
	}
} 
void print(int arr[],int n)
{
	int i;
	for(i = 0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	} 
	cout<<endl;
}
int main()
{
	int arr[] = {1,2,89,99,67,90};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	cout<<"Sorted array is:"<<endl;
	print(arr,n);
	return 0;
	
}
