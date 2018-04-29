#include<stdlib.h>
#include"structure.h"
int main()
{
	int choice;
	long memspace;
	int numofcounts[6]={1,1,1,1,1,1};
while(1)
{	
	system("cls");
	printf("\n\n\n\n\n\t\t\tWEL-COME TO TRILOKYNATH'S MALL\n");
	printf("\n\n\n\n\t\t1.Administrative\n");
	printf("\n\t\t2.Employee\n");
	printf("\n\t\t3.Exit\n");
	gotoxy(50,12);
	printf("Select: ");
	scanf("%d",&choice);
	fflush(stdin);
	gotoxy(50,12);
	switch(choice)
	{	
	case 2:
		memspace=employee(numofcounts);
		break;
	case 1:
		admin(numofcounts);
		break;
	case 3:
		exit (0);
	}
}
 getch();
 free(c[memspace]);
 return(0);

}
