#include<Windows.h>
#include"structure.h"

void go(int c,int l)
{
	COORD coord;
	coord.X=c;
	coord.Y=l;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
