
#include <iostream>
using namespace std;   
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
} 
int partition(int arr[], int p, int r)
{	
	int x = arr[r];
	int i;
	i = p-1;
	for(int j = p; j<=r-1; j++)
	{
		if(arr[j]<=x)
		{
			i = i+1;
			swap(&arr[i],&arr[j]);
		}  

	}  
	swap(&arr[i+1],&arr[r]);
	return(i+1);

}
void quickSort(int arr[], int start, int end)
{
	if (start >= end)
		return;
	int p = partition(arr, start, end);
	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}
int main()
{

	int arr[] = { 9, 3, 4, 24, 10, 88 };
	int n = 6;

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
