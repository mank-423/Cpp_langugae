#include<stdio.h>
#include<conio.h>

int address(int *x){
	printf("The address is : %u\n",&x);
	printf("The value is : %u\n",*x);
	return 0;
}

int getadd(int *x){
	printf("The adress 2: %u\n",&x);
	return 0;
}

int change(int *a){
	int temp;
	temp = 10*(*a);
	*a = temp;
	return *a;
};

int sandav(int *first, int *second){
	int i = *first;
	int j = *second;
	printf("The sum of the following numbers is:%d \n",(i+j));
	printf("The avg of the following numbers is:%d \n",(i+j)/2);
	return 0;
}

int main(){
	int i = 5;
	int *pt = &i;
	int **pt1 = &pt;
	printf("The value through pointer to pointer: %u\n",**pt1);
	/*
	int one = 5;
	int sec = 5;
	//int *pt = &one;
	//int *pt1 = &sec;
	sandav(&one,&sec);
	
	int x = change(pt);
	printf("%d \n",x);
	printf("%d",i);
	*/
}