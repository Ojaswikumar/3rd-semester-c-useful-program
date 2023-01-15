#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n)
{
	int i,temp,j;
	for(i = 1;i<n-1; i++)
	{
		temp = arr[i];
		j = i;
		while ((j>0)&&(arr[j-1]>temp))
		{
			arr[j] = arr[j-1];
			j = j-1;
		} 
		arr[j] = temp;
	}
} 
void print(int arr[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	} 
	cout<<endl;
} 
int main()
{
	int arr[] = {1,23,34,55,7,2,89};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	cout<<"Sorted array is:"<<endl;
	print(arr,n);
	return 0;
}
