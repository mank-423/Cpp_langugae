int n; //No. of processes
printf("Enter the no. of processes:");
scanf("%d",&n);
int at[n];
int bt[n];
for (i=0;i<=n-1;i++)
{
	printf("Enter the arrival time of the process:");
	scanf("%d",&at[i]);
	
	printf("Enter the burst time of the process:");
	scanf("%d",&bt[i]);
}

for (i=0;i<n-1;i++)
{
	printf("The arrival time of process P");
	printf(i);
}
