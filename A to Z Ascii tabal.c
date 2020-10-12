#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,no1;

    for(no=65,no1=97;no<=90;no++,no1++)
    {
        printf("\n %d  =  %c    |  %d  =  %c",no,no,no1,no1);
    }
    getch();
    return 0;
}
