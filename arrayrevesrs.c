#include<stdio.h>
# define N 1000
int main()
{
	int arr[N];
	int n;
	int i;
	
	printf("Enter size of an array:");
	scanf("%d",&n);
	
	
	printf("Enter array:\n");
	for(i=0;i<n;i++);
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter reverse array:\n");
	for( i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
