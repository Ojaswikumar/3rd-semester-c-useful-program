#include<bits/stdc++.h>
#define max 30
int main()
{
	int i,j,n,t,pos,bt[max],pr[max],tat[max],wt[max];
	float awt = 0,atat = 0;
	printf("Enter the total number of processes");
	scanf("%d",&n);
	
	printf("Enter the burst time of the processes");
	for(i=  0;i<n; i++){
	
	  scanf("%d",&bt[i]);} 
    printf("Enter the priority number");
	for(i=  0;i<n; i++){
	
	  scanf("%d",&pr[i]);} 
	for(i = 0;i<n;i++)
	{    
        pos = i;
	  	for(j = i+1;j<n;j++)
	  	{ 
	  	     if(pr[j]<pr[pos])
	  	     {
                 pos = j;				
			 }  
        }
            
				
		t = pr[i];
		pr[i] = pr[pos];
		pr[pos] = t;  

        t = bt[i];
		bt[i] = bt[pos];
		bt[pos] = t;

		
	  }
	
	printf("process\t burst time\t  waiting time\t turn around time\n");
    wt[0] = 0;
	for(i = 0;i<n;i++)
	{
		wt[i] = 0;
		tat[i] = 0; 
		
//		temp[i+1] = temp[i]+bt[i];
//		wt[i] = temp[i] - at[i];  
        for(j = 0;j<i;j++)
        {
        	wt[i] = wt[i]+bt[j];
		}
		tat[i] = wt[i]+bt[i];
		awt  = wt[i]+awt;
		atat = atat+tat[i];
		printf("%d\t\t%d\t\t%d\t\t%d\n",pr[i],bt[i],wt[i],tat[i]);
	} 
	awt = awt/n;
	atat = atat/n; 
	printf("Average waiting time is\n");
	printf("%f",awt);
	printf("\n");
	printf("Average turn around  time is\n");
	printf("%f",atat);
}
	
	
