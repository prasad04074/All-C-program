#include<stdio.h>
#include<conio.h>
int main()
{
    char ch=0;

    for(ch='A';ch<='Z';ch++)
    {
        printf("\n %c  =  %d   |   %c  =  %d",ch,ch,ch+32,ch+32);
    }
    getch();
    return 0;
}
