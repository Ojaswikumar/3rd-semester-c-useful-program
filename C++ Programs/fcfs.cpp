#include<bits/stdc++.h>
#define max 30
int main()
{
	int i,j,n,bt[max],at[max],tat[max],wt[max],temp[max];
	float awt = 0,atat = 0;
	printf("Enter the total number of processes");
	scanf("%d",&n);
	printf("Enter the burst time of the processes");
	for(i=  0;i<n; i++){
	
	  scanf("%d",&bt[i]);} 
	printf("Enter the arrival time of the processes");
	for(i=  0;i<n; i++){
	
	  scanf("%d",&at[i]);}
	temp[0] = 0;
	printf("process\t burst time\t arrival time\t waiting time\t turn around time\n");
	for(i = 0;i<n;i++)
	{
		wt[i] = 0;
		tat[i] = 0;
		temp[i+1] = temp[i]+bt[i];
		wt[i] = temp[i] - at[i];
		tat[i] = wt[i]+bt[i];
		awt  = wt[i]+awt;
		atat = atat+tat[i];
		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
	} 
	awt = awt/n;
	atat = atat/n; 
	printf("Average waiting time is\n");
	printf("%f",awt);
	printf("Average turn around  time is\n");
	printf("%f",atat);
}