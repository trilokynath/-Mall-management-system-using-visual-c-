
#include"structure.h"

void acceptcust(struct cust *c1)
{
	int ch,verify=0,add,i,byte=18;
	char *nm=c1->c_name;
	i=count[c1->b_no/1000];
		system("cls");
		
	printf("\n\n\n\n\n\t\t\tWEL-COME TO TRILOKYNATH'S MALL\n");
	
	printf("\n\n\n\t\t\tCOUNTER %d\n\n",c1->b_no/1000);

	lineacc();
	printf("\n|NAME: \t\t\t\t\t\t|BILL NO.:\t\t|\n");

	lineacc();

	printf("\n|\tProduct name\t\t|Quantity\t|\tPrice\t\t|\n");

	lineacc();
	
	printf("\n|\t\t\t\t|\t\t|\t\t\t|\n");
	lineacc();


	gotoxy(60,12);
	printf("%d",c1->b_no);
	fflush(stdin);
	gotoxy(8,12);
	//scanf("%s",&c1->c_name);
    fgets(nm, 18, stdin); 
	fflush(stdin);
	while(1)
	{
	gotoxy(3,16+(i*2));
	scanf("%s",&c1->p[i].p_name);
	fflush(stdin);
	gotoxy(35,16+(i*2));
	scanf("%d",&c1->p[i].quantity);
	gotoxy(55,16+(i*2));
	fflush(stdin);
	scanf("%f",&c1->p[i].price);
	fflush(stdin);
	i++;
	gotoxy(0,16+(i*2));
	printf("\t1.Add Another\t2.Do Not Add\t\tChoose:");
	scanf("%d",&add);
	fflush(stdin);
	if(add==1)
	{
		
		gotoxy(0,16+(i*2));
		printf("                                                          ");
		gotoxy(0,16+(i*2));
		printf("|\t\t\t\t|\t\t|\t\t\t|\n");
		lineacc();
	}
	else
		break;
	}
	gotoxy(0,16+(i*2));
	lineacc();
	printf("\n|Select Contact Choice\t|\t\t\t\t\t\t|\n|\t1.Mobile No.\t|\t\t\t\t\t\t|\n|\t2.Phone No.\t|\t\t\t\t\t\t|\n|\tChoose any One..|\t\t\t\t\t\t|\n|\t\t\t|\t\t\t\t\t\t|\n");
	lineacc();
	gotoxy(26,16+(i*2)+4);
	scanf("%d",&ch);
	fflush(stdin);
	if(ch==1)
	{
repeate:
		gotoxy(2,16+(i*2)+5);
		printf("Mobile No.(10 digits)");
		gotoxy(26,16+(i*2)+5);
		scanf("%ld",&c1->ph.mobile);
	}
	else if(ch==2)
	{
		gotoxy(2,16+(i*2)+5);
		printf("Phone No.(6 Digits)");
		gotoxy(26,16+(i*2)+5);
		scanf("%d",&c1->ph.phone);
	}
	else
	{
		gotoxy(2,16+(i*2)+5);
		printf("Wrong Choice..");
		getch();
		goto repeate;
	}
	c1->pro=i;
 }

