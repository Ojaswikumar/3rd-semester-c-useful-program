#include<iostream>
#define max 30
using namespace std;
int main()
{
    int i,j,t,n,p[max],bt[max],tat[max],wt[max];
    float awt = 0,atat = 0;
    printf("Enter the number of process\n");
    scanf("%d",&n);
    printf("Enter the process number\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&p[i]);
    } 
    printf("Enter the burst time of the process\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    } 
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n-i-1;j++)
        {
            if(bt[j]>bt[j+1])
            {  
                t = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = t;
                
                t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;
            }
        }
    } 
    printf("process\t burst time\t  waiting time\t turn around time\n");
    wt[0] = 0;
    for(i = 0;i<n;i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        for(j = 0;j<i;j++)
        {
            wt[i] = wt[i]+bt[j];
        } 
        tat[i] = bt[i]+wt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
        printf("%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
    } 
    awt = awt/n;
	atat = atat/n; 
	printf("Average waiting time is\n");
	printf("%f",awt);
	printf("Average turn around  time is\n");
	printf("%f",atat);

}