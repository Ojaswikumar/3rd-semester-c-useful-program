#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int p,int q,int r)
{
    int n1 = q-p+1;
    int n2 = r-p;
    int i,j;
    int L[n1],M[n2];
    for(i = 0;i<n1;i++)
    {
       L[n1] = arr[p+i];
    }
    for(j = 0;j<n2;j++)
    {
       M[n2] = arr[q+j+1];
    } 
    int i,j,k;
    i = 0;
    j = 0;
    k = p;
    while(i<n1 && j<n2)
    {
        if(L[i]<=M[j])
        {
            arr[k] = L[i];
            i++;
        } 
        else
        {
            arr[k] = M[j];
            j++;
        } 
        k++;
    } 
    while (i < n1) 
    {
     arr[k] = L[i];
     i++;
     k++;
    }

  while (j < n2) 
   {
     arr[k] = M[j];
     j++;
     k++;
   }


}