#include<stdio.h>

int main()

{
	int n,pos,num,i,arr[100];
	printf("Enter the size of an array:");
	scanf("%d",&n);
	
	printf("Enter the element of an array:\n");
	
	//input value of an array
	
	for(i=0;i<n;i++)
	
    {
    	scanf("%d",&arr[i]);
    	
	}
	
	//position to enter a new element
	
	printf("Enter new position:\n");
	scanf("%d",&pos);
	// number to be inserted in an array
	
	printf("number to be inserted in an array:\n");
	scanf("%d",&num);
	
	for(i=n;i>=pos;i--)
	{
		arr[i]=arr[i-1];
		
	}
	
	arr[pos-1]=num;
	
	//increment the size of an array
	
	n++;
	
	//array after inserting new element
	
	printf("After inserting new element:\n ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		
	}
}
