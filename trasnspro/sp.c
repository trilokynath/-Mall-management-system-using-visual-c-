#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
int a[10][10],i,j,z=1,n,m,no,mul,x,y;
clrscr();
printf("How many rows or cols you have?  :-> ");
scanf("%d",&no);
if(no%2==0)
{
n=no/2;
}
else
{
n=(no/2);
n++;
}
mul=no*no;
i=n-1;
j=i-1;
m=n-2;
   x=30;
   y=10;
while(1)
{
for(j=j+1;j<=n;j++)
{
      z++;
   gotoxy(x+j*3,y+i);
   scanf("%d",&a[i][j]);
if(z>mul)
goto btm;
}
j--;
for(i=i+1;i<=n;i++)
{
z++;
   gotoxy(x+j*3,y+i);
   scanf("%d",&a[i][j]);
if(z>mul)
goto btm;
}
i--;
for(j=j-1;j>=m;j--)
{
z++;
   gotoxy(x+j*3,y+i);
   scanf("%d",&a[i][j]);
if(z>mul)
goto btm;
}
j++;
for(i=i-1;i>=m;i--)
{
z++;
   gotoxy(x+j*3,y+i);
   scanf("%d",&a[i][j]);
if(z>mul)
goto btm;
}
i++;
n++;
m--;
}
btm:
   clrscr();


z=1;
if(no%2==0)
{
n=no/2;
}
else
{
n=(no/2);
n++;
}
mul=no*no;
i=n-1;
j=i-1;
m=n-2;
   x=30;
   y=10;
while(1)
{
for(j=j+1;j<=n;j++)
{
      z++;
    delay(5000);
   gotoxy(x+j*3,y+i);
   printf("%d",a[i][j]);
if(z>mul)
goto btmm;
}
j--;
for(i=i+1;i<=n;i++)
{
z++;
    delay(5000);
   gotoxy(x+j*3,y+i);
   printf("%d",a[i][j]);
if(z>mul)
goto btmm;
}
i--;
for(j=j-1;j>=m;j--)
{
z++;
    delay(5000);
   gotoxy(x+j*3,y+i);
   printf("%d",a[i][j]);
if(z>mul)
goto btmm;
}
j++;
for(i=i-1;i>=m;i--)
{
z++;
    delay(5000);
   gotoxy(x+j*3,y+i);
   printf("%d",a[i][j]);
if(z>mul)
goto btmm;
}
i++;
n++;
m--;
}
btmm:
getch();
}