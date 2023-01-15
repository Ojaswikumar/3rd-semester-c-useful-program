#include<iostream>
using namespace std;
const int p=5;
const int r=3;
void needed(int need[p][r],int allot[p][r],int max[p][r])
{
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<r;j++)
		{
			need[i][j]=max[i][j]-allot[i][j];
		}
	}
}



bool banker(int pnum[p],int avail[r],int max[p][r],int allot[p][r])
{
	int need[p][r];
	needed(need,allot,max);
	int count=0;
	int finished[p]={0};
	int safe[p];
	int work[r];
	for (int i = 0; i < r ; i++)
        {work[i] = avail[i];}
	while(count<5)
	{
		int flag=0;
		for(int i=0;i<p;i++)
		{
			if (finished[i]==0)
			{
				int j;
				for(j=0;j<r;j++)
				{
					if(need[i][j]>work[j])
					{
						break;
					}
				}
				if(j==r)
				{
					for(int k=0;k<r;k++)
					{
						work[k]+=allot[i][k];
					}
					safe[count++]=i;
					finished[i]=1;
					flag=1;
				}
					
			}
		}
		if(flag==0)
		{
			cout<<"unsafe condition arrised";
			return false;
		}
	}
	cout<<"safe condition";
	for(int i=0;i<p;i++)
	{
		cout<<safe[i]<<"   ";
		
	}
	return true;
}





int main()
{
int pnum[5]={0,1,2,3,4};
int available[3]={3,3,2};
int maximum[5][3]={{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
int alloted[5][3]={{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};
banker(pnum,available,maximum,alloted);
}