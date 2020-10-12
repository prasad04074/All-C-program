#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    printf("\n ======================****ASCII TABAL****================ \n");

    while(no<127)
    {
        printf("\n %d =%c",no,no);
        no++;
    }
    getch();
    return 0;
}
