#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}  
void shellsort(int arr[],int n)
{
	int gap,i,j;
	for(gap = n/2; gap>=1; gap/=2)
	{
		for(j = gap;j<n;j++)
		{
			for(i = j-gap; i>=0; i = i-gap)
			{
				if(arr[i+gap]>arr[i])
				{
					break;
				} 
				else
				{ 
				  swap(&arr[i+gap],&arr[i]);
				}
			}
		}
	}
} 
void print(int arr[],int size)
{
	int i;
	for(i = 0;i<size;i++)
	{
		cout<<arr[i]<<ends;
	} 
	cout<<endl;
}
int main()
{
	int arr[] = {1,2,899,9900,670,900000};
	int n = sizeof(arr)/sizeof(arr[0]);
	shellsort(arr,n);
	cout<<"Sorted array is:"<<endl;
	print(arr,n);
	return 0;
	
}
