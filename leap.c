
//   Ternary operator  use for leap year

//   condition    true            false

//  (expression)?(expression 2):(expression 3);


#include<stdio.h>

int main()

{
	int y;
	
	printf("Enter a year:");
	scanf("%d",&y);
	
	
	if((y%4==0)&&(y%100!=0)||(y%400==0))
	{
	
	printf("This is leap year\n");
}
	else
	{
	
    	 printf("This is  not leap year\n");
}
}
