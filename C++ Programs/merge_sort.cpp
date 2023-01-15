//#include<bits/stdc++.h>
//using namespace std;
//void merge(int arr[],int p,int q,int r)
//{
//	int n1 = q-p+1;
//	int n2 = r-q;
//	int L[n1];
//	int R[n2];
//	int i,j;
//	for(int i = 1;i<n1;i++)
//	{ 
//	   L[i] = arr[p+i-1];	
//	} 
//	for(int j = 1;j<n2;j++)
//	{ 
//	   R[j] = arr[q+j];	
//	} 
//	L[n1+1] = 400000;
//	R[n2+1] = 900000;
//	i = 1;
//	j = 1;
//	int k;
//	for(k=p; k<r; k++)
//	{
//		if(L[i]<R[j])
//		{
//			arr[k] = L[i];
//			i++;
//		} 
//		else
//		{
//			arr[k] = R[j];
//			j++;
//		}
//	}
//}
//void merge_sort(int arr[],int p,int r)
//{
//	if (p<r)
//	{
//		int q = (p+r)/2;
//		merge_sort(arr,p,q);
//		merge_sort(arr,q+1,r);
//		merge(arr,p,q,r);
//	}
//} 
//void print(int arr[],int size)
//{
//	int i;
//	for(i = 0;i<size;i++)
//	{
//		cout<<arr[i]<<ends;
//	} 
//	cout<<endl;
//}
//int main()
//{
//	int arr[] = {1,2,89,99,67,90};
//	int n = sizeof(arr)/sizeof(arr[0]);
//	merge_sort(arr,0,5);
//	print(arr,n);
//	return 0;
//	
//} 
// Merge sort in C++ 
#include <iostream>
using namespace std;
void merge(int arr[], int p, int q, int r) {
  
  
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}


void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

   
    merge(arr, l, m, r);
  }
}


void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}


int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}
