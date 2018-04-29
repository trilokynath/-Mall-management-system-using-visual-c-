#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"product.h"
#include"custenum.h"
#include"custunion.h"

void gotoxy(int x, int y);
int admin(int*);
long employee(int*);
void acceptcust(struct cust*);
void display(struct cust *c1);
void line();
int encrypt(char [10]);
void lineadmin();

struct cust
{
	int b_no;
	char c_name[20];
	struct product p[10];
	union contact ph;
	int pro;
	float t_price;
}*c[6];


	int count[6];