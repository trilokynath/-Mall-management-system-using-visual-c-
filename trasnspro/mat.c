#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>

int main()
{
	int a[20][20],m,n,i,j,z=0,flag=0,no;

	printf("Enter size of row of matrix: ");
		scanf("%d",&no);
	n=no/2;
	m=n-1;
	j=n;
	i=n;
	n++;
while(1)
{
		for(j=n-1;j<=n;j++)
		{
			a[i][j]=z;
			z++;
			if((n+1)*(n+1)>z)
			goto btm;
		}
		for(i=n-1;i<=n;i++)
		{
			a[i][j]=z;
			z++;
			if((n+1)*(n+1)>z)
			goto btm;
		}
		for(j=j;j>=m;j--)
		{
			a[i][j]=z;
			z++;
			if((n+1)*(n+1)>z)
			goto btm;
		}
		for(i=i;i>=m;i--)
		{
			a[i][j]=z;
			z++;
			if((no*no)>z)
			goto btm;
		}
		n++;
		m--;
	}
btm:
	printf("Spiral matrix is: \n");
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d   ",a[i][j]);
			}
			printf("\n");
		}
		getch();
}