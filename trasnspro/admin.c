#include"structure.h"


int admin(int* numofcounts)
{
	int i,counter,ch,bill;
	system("cls");
	printf("\n\n\n\n\n\t\t\tWEL-COME TO TRILOKYNATH'S MALL\n\n\n");

	while(1)
{
	top: system("cls");
	printf("Counter1\tCounter2\tCounter3\tCounter4\nCounter5\tCounter6\t7.Exit\n\n\tSelect:");
	scanf("%d",&counter);
	if(counter>=1&&counter<=6)
	{
		
	printf("\n\n\t\t");
	lineadmin();
	printf("\n\t\t|Bill No.\t|\tCounter 1\t|\n\t\t");
	lineadmin();
	for(i=0;i<(*(numofcounts+(counter-1))-1);i++)
	{
		printf("\n\t\t|%d\t\t|\t%0.2f\t\t|\n\t\t",(c[counter-1]+i)->b_no,(c[counter-1]+i)->t_price);
		lineadmin();
	}
	}
	else if(counter==7)
		return 0;
	printf("\n\n\t\t1.See Detail\t\t2.See Another list\n\n\t\tChoose:");
	scanf("%d",&ch);
	fflush(stdin);
	if(ch==1)
	{
		printf("\n\n\t\tEnter Bill No. to search:");
		scanf("%d",&bill);
		fflush(stdin);
		if(bill>=1000)
		{
		ch=bill%1000;
		bill/=1000;
		if(ch>(*(numofcounts+(counter-1))-1))
			printf("\n\n\t\tWrong Entry...");
		else
			display(c[bill-1]+ch);
		getch();
		}
	}
}
}

