#include<stdio.h>
#include<conio.h>

int main()
{
	int n=5;
	int array[n] = {1,4,2,5,3};
	int c,d,swap,temp;
	
	
	for (c=1;c<n;c++)
	{
		int temp=array[c];
		d=c-1;
		while (d>=0 && temp<array[d])
		{
			array[d+1]=array[d];
			d--;
		}
		
		array[d+1]=temp;
	}
	
	/*
	for (c=0;c<n;c++)
	{
		int min=c;
		for (d=c+1;d<n;d++)
		{
			if (array[d]<array[min])
			{
				min=d;
			}                                   //SELECTION SORT
		}
		
		if (min!=c)
		{
			swap=array[c];
			array[c]=array[min];
			array[min]=swap;
		}
	}
	
	*/



	/*
	for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)            //BUBBLE SORT
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
	
	for (i=0;i=n-1;i++)
	{
		for (j=0;j<=n-i;j++)
		{
			if (a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	*/
	
	
	
	for (c=0;c<n;c++)
	{
		printf("%d \n",array[c]);
	}
	return 0;
}
