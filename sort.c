//program for sorting an array of elements
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void input(int *,int);
void display(int *,int);
void bubblesort(int *,int);
int main()
{
	int a[10];
	input(a,10);
	display(a,10);
	bubblesort(a,10);
	printf("after sorting the array is:\n");
	display(a,10);
}
void input(int *p,int size)
{
	int i;
	srand(getpid());
	for(i=0;i<size;i++)
	{
		p[i]=rand()%100;
	}
}
void display(int *p,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",p[i]);
	}
	printf("\n");
}
void bubblesort(int *p,int size)
	{
		int i,j,temp;
		for(i=0;i<size-1;i++)
		{
			for(j=0;j<size-i-1;j++)
			{
				if(p[j]>p[j+1])
				{
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}
			}
		}
	}

