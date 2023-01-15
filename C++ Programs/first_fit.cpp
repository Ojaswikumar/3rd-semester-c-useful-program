#include<iostream>
using namespace std;
void first_fit(int process[],int block[],int process_n,int block_m)
{
	int allocation[process_n];
	for(int i=0;i<process_n;i++)
	{
		allocation[i]=-1;
	}
	for(int i=0;i<process_n;i++)
	{
		
		for(int j=0;j<block_m;j++)
		{
			if(block[j]>=process[i])
			{
			allocation[i] = j;
			block[j] -= process[i];
			break;
			}
			
			
		}
	
	}
	cout<<"process_no. process_size   block_no\n";
	for(int i=0;i<process_n;i++)
	{
		cout<<i+1<<"\t\t"<<process[i]<<"\t\t";
		if(allocation[i]!=-1)
		{
		cout<<allocation[i]+1;	
		}
		else
		{
			cout<<"not allocated";
		}
		cout<<endl;
	}
}
int main()
{
	int block[]={100, 500, 200, 300, 600};
	int process[]={212, 417, 112, 426};
	int block_m=sizeof(block)/sizeof(block[0]);
	int process_n=sizeof(process)/sizeof(process[0]);
	first_fit(process,block,process_n,block_m);
}