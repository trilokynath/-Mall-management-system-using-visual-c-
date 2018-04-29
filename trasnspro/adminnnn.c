#include"structure.h"
#include"funcions.h"


void adminnnnnnnnnn()
{
	int returnmark;
	char pass[10];
	system("cls");
	printf("\n\n\n\n\n\t\t\tWEL-COME TO TRILOKYNATH'S MALL\n");
	gotoxy(35,10);
	printf("Administrative");
	gotoxy(30,12);
	printf("Enter Passwaord:");
	scanf("%s",pass);
	fflush(stdin);
	returnmark=encrypt(pass);
	if(returnmark==1)
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t\tSorry Data not found...\n");
		display(c[1]);
	}
	else
		exit(0);

}
