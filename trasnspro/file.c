#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	int cnt=0;
	FILE *fptr;
	fptr=fopen("file.txt","r");
	while((ch=fputc(fptr))!='\n')
	{
		printf("%c",ch);
		cnt++;
	}


	//while((ch=getc(fptr))!=-1)
	//{
	//	printf("%c",ch);
	//	cnt++;
	//}
	//printf("\n %d charaters are exist in file",cnt);

	getch();
	return 0;
}
