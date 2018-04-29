#include<Windows.h>
void gotoxy(int x, int y)
{
    COORD c = { x, y };  
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}