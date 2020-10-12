#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    printf("\n ======================****ASCII TABAL****================ \n");

    for(no;no<127;no++)
    {
        printf("\n %d =%c",no,no);
    }
    getch();
    return 0;
}
