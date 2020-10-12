#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=10,i=0;

    for(i=1;i<=10;i++)
    {
        for(no1=5;no1<=no2;no1++)
        {
            printf("  %3d",no1*i);
        }
        printf("\n");
    }
    getch();
    return 0;
}
