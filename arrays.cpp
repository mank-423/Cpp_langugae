#include<stdio.h>


int main()
{
	int num=5;
	int ar[num]={10,20,30,40,50};
	int mid,low,high,key;
	low=0;
	high=num-1;

	printf("The Element to find:");
	scanf("%d",&key);
	
	int n;
	n=sizeof(ar)/sizeof(int);
	mid=int(n/2);
	
	while (low<high)
	{
		if (ar[mid]==key)
		{
			printf("Element found at index: %d",mid);
		}
	
		else if(ar[mid]>key)
		{
			high=mid-1;
		}
		
		else
		{
			low=mid+1;
		}
	}
	
	
	return 0;
}
