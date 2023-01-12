//Simple Interest


#include<stdio.h>
 
 int main()
 
 {
 	int p,r,t,si;
 	printf("Enter principle:",p);
 	scanf("%d",&p);
 	printf("Enter Rate:\n",r);
 	scanf("%d",&r);
 	printf("Enter time:\n");
 	scanf("%d",&t);
 	// calculate simple interest 
 	
 	si=(p*r*t)/100;
 	
 	printf("simple intrest is:%d",si);
 	
 }
