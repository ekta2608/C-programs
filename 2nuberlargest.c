#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter any three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>=b && b>=c)
	
	 {
	 	if(b>=c)
	 	 printf("%d is the largest number:\n",b);
	 	 
	 	else
		 printf("%d is the largest number:\n",c);
		  
	 }
	 
	else if(b>=a && b>=c)
	{
		if(a>=c)
		printf("%d is the largest number:\n",a);
		else
		printf("%d is the largest number:\n",c);
		
	}
	else if(a>=b)
	
	{
		printf("%d is the largest number:\n",a);

    } 

	else
	{
	
		printf("%d is the largest number:\n",b);
	}
	
	
	
	
}
