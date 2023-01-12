#include<stdio.h>

void main()
{
	int i, n, m;
	
	printf("Enter the range:\t");
	scanf("%d", &n);
	
	m = 0;
	
	while(m <= n)
	{
		for(i = 2; i <= m; i++)
		{
			if(m % i == 0)
				break;
		}
		
		if(i == m)
			printf("%d\t", m);
		m++;
	}
	printf("\n");
}

