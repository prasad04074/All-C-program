#include<stdio.h>
#include<conio.h>
int main()
{
    int var=0;

    for(var=65;var<=90;var++)
    {
        printf("\n %c  =  %d   |   %c  =  %d",var,var,var+32,var+32);
    }
    getch();
    return 0;
}
