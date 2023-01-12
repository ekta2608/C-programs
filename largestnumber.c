
#include<stdio.h>

 void main()
{
	int a,b,c;
	
	printf("Enter any three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>=b)
	
	 {
	 	if(a>=c)
	 	
	 	
	 		printf("%d is a largest number:",a);
		 else
		 	printf("%d is a largest number:",c);
		 
	 }
	 
	 else
	 {
	 	if(b>=c)
	 	
	 	printf("%d is a largest number:",b);
	 	 
	 	else
		 
		 printf("%d is a largest number:",c);
		 
	 }
	 
	 
	 
}
