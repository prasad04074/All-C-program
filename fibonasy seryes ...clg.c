#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=1,no3=0,con=0;

    printf("\n Enter a value to print fibonassy series : \n");
    scanf("%d",&con);

    printf("\n ============================********=====================\n");

    printf("%d\t%d",no1,no2);
    for(con;con>2;con--)
    {
        no3=no1+no2;
        no1=no2;
        no2=no3;
        printf("\t%d",no3);
    }

    printf("\n ==========================**THANKS**=======================");
    getch();
    return 0;
}
