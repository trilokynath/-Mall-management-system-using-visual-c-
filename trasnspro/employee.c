
#include"structure.h"
long employee(int *numofcounts)
{
	int choice;
	long sizeofram;
	int cnt,i=0,counter;
	
	for(i=0;i<6;i++)
	{
		c[i]=(struct cust*)malloc(sizeof(struct cust));
		c[i]->b_no=1000*(i+1);
		count[i]=0;
	}
while(1)
{
top: system("cls");
	printf("Counter1\tCounter2\tCounter3\tCounter4\nCounter5\tCounter6\t7.Exit\n\n\tSelect:");
	scanf("%d",&counter);
	if(counter>=1&&counter<=6)
	{
		i=0;
	while(1)
	{
	system("cls");
	printf("\n\n\n\n\n\t\t\tCOUNTER %d\n",counter);
	printf("\n\n\n\n\t\t1.Add\n");
	printf("\n\t\t2.Exit\n");
	gotoxy(50,11);
	printf("Select: ");
	scanf("%d",&choice);
	gotoxy(0,16);
	switch(choice)
	{
	case 1:

		
		acceptcust(c[counter-1]+(*(numofcounts+(counter-1))-1));
		display(c[counter-1]+(*(numofcounts+(counter-1))-1));

		getch();
		(*(numofcounts+(counter-1)))++;
		c[counter-1]=(struct cust*)realloc(c[counter-1],*(numofcounts+(counter-1))*sizeof(struct cust));
		(c[counter-1]+(i+1))->b_no=(c[counter-1]+i)->b_no+1;
		i++;
		break;
	case 2:
		goto top;
	}
	}
	}
	else if(counter==7)
		goto btm;
}

btm:
 for(i=0;i<6;i++)
	 sizeofram=i**(numofcounts+i)*sizeof(struct cust);
 return sizeofram;
}
