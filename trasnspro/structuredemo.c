#include<stdlib.h>
#include"structure.h"

int main()
{
	struct cust *c;
		
	float *transcnt[6],transtot=0.0f,sum,grandsum=0.0f;
	int cnt,trans,numoftrans[6],i=0,freememcount=0,counter;
	char ch;
	
	c=(struct cust*)malloc(sizeof(struct cust));
	 printf("\n\n\t\t\tWEL-COME TO TRILOKYNATH'S MALL\n");
	printf("Select the counter from 1 to 6   :");
	scanf("%d",&counter);
	{

		 printf("\n\n\n\t\t\t  WELCOME TO COUNTER %d\n",counter);
		printf("\n\n\n\t1.Add \n\t2.exit\n\n\tChoice:");
			scanf("%d",&cnt);
			c=(struct cust*)realloc(c,cnt*sizeof(struct cust));
		 printf("\n");
		 do
		 { 	
			acceptcust((c+i));
			display((c+i));
			i++;
			getch();
			system("cls");
			printf("Do you want to continue (y\n):");
			fflush(stdin);
			scanf("%c",&ch);
		 }while(ch=='Y'||ch=='y');
	 }
	
	
	  free(c);


 getch();
 return(0);

}
