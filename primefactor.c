#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the number n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		//	printf("%d ",i);
			for(j=2;j<=i;j++)
			{
				if(i%j==0)
				{
					break;
				}
			}
			if(i==j)
				printf("%d ",i);
		}
	}
}
