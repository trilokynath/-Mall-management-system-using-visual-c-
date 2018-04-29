#include"structure.h"
#include<Windows.h>

void display(struct cust *c1)
{
	int i;
	system("cls");
		
	printf("\n\n\n\n\n\t\t\tWEL-COME TO TRILOKYNATH'S MALL\n");
	
	printf("\n\n\t\t\tCOUNTER %d\n",c1->b_no/1000);
	
	printf("\nDetail is:\n");
	line();
	printf("\n|NAME: \t\t\t\t\t\t\t\t|BILL NO.:\t\t|\n");

	line();

	printf("\n|\tProduct name\t\t|Quantity\t|\tPrice\t\t|Total\t\t|\n");

	line();
	
	gotoxy(74,12);
	printf("%d",c1->b_no);
	fflush(stdin);
	gotoxy(8,12);
	printf("%s",c1->c_name);
	fflush(stdin);

	for(i=0;i<c1->pro;i++)
	{	
	gotoxy(0,16+(i*2));
	printf("|\t\t\t\t|\t\t|\t\t\t|\t\t|\n");
	line();
	gotoxy(3,16+(i*2));
	printf("%s",c1->p[i].p_name);
	gotoxy(35,16+(i*2));
	printf("%d",c1->p[i].quantity);
	gotoxy(55,16+(i*2));
	printf("%0.2f",c1->p[i].price);
	c1->p[i].t_price=c1->p[i].price*c1->p[i].quantity;
	if(i==0)
	{
		c1->t_price=c1->p[i].t_price;
	}
	else
	{
		c1->t_price=c1->p[i-1].t_price+c1->p[i].t_price;
	}
	gotoxy(75,16+(i*2));
	printf("%0.2f",c1->p[i].t_price);
	}

	gotoxy(0,16+(i*2));
	printf("|You Have To Pay Rs. \t\t\t\t:%10.2f\t\t\t\t|\n",c1->t_price);
	line();
	gotoxy(0,(16+(i*2)+4));
	line();
	printf("\n|Contact:%ld\t\t\t\t\t\t\t\t\t|\n",c1->ph.mobile);
	line();
	
}