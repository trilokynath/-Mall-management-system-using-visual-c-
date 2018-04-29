#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>

int main()
{
	 float *transcnt[6],transtot=0.0f,sum,grandsum=0.0f;
	 int cnt,trans,numoftrans[6],i,freememcount=0;
	 printf("\n\n\t\t\tWEL-COME TO TRILOKYNATH'S MALL\n");
	 for(cnt=0;cnt<2;cnt++)
	 {
		 printf("\n\n\n\t\t\t  WELCOME TO COUNTER %d\n",cnt+1);
		 printf("\n\t\tHow many transictions you want to do on this counter: ");
		 scanf("%d",&numoftrans[cnt]);
		 transcnt[cnt]=(float*)malloc(*(numoftrans+cnt)*sizeof(float));
		 freememcount+=(*(numoftrans+cnt))*sizeof(float);
		 printf("\n");
		 for(trans=0;trans<numoftrans[cnt];trans++)
		 {
			 printf("\t\t\t\t\tEnter Amount for transiction %d: ",trans+1);
			 scanf("%f",(*(transcnt+cnt)+trans));
		 }
	 }
	system("cls");
	 printf("\n\n\tTRANSICTION DETAILS:\t     trans1\t  trans2\t    Totle\n");
	  for(cnt=0;cnt<2;cnt++)
	 {	
		 sum=0.0f;
		 printf("\ttrans on counter %d is:",cnt+1);
		 for(trans=0;trans<numoftrans[cnt];trans++)
		 {
			 printf("\t%10.2f",*(*(transcnt+cnt)+trans));
			 sum+=*(*(transcnt+cnt)+trans);
		 }
		 printf("%*c",20*(2-numoftrans[cnt]),' ');
		 printf("\t%10.2f\n",sum);
		 grandsum+=sum;
	 }
	 printf("\n\n\t\t\t\t\t\tGrand totle is%10.2f\n",grandsum);
	  getch();

	  free(transcnt[freememcount]);
	  return 0;

}