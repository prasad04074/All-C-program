#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,re=0;


    printf("\n Enter a 2 number for addition=");
    scanf("%d%d",&no1,&no2);
    re=no1+no2;
    printf("\n Addition of %d and %d is =%d",no1,no2,re);

    printf("\n ================***Addition operator***=================\n");

    printf("\n Enter a 2 number for subtraction=");
    scanf("%d%d",&no1,&no2);
    re=no1-no2;
    printf("\n Subtraction of %d and %d is =%d",no1,no2,re);

    printf("\n ================***Addition operator***=================\n");

    printf("\n Enter a 2 number for Multiplication=");
    scanf("%d%d",&no1,&no2);
    re=no1*no2;
    printf("\n Multiplication of %d and %d is =%d",no1,no2,re);

    printf("\n ================***Addition operator***=================\n");

    printf("\n Enter a 2 number for Division=");
    scanf("%d%d",&no1,&no2);
    re=no1/no2;
    printf("\n Division of %d and %d is =%d",no1,no2,re);

    printf("\n ================***Addition operator***=================\n");

    printf("\n Enter a 2 number for Mod=");
    scanf("%d%d",&no1,&no2);
    re=no1%no2;
    printf("\n Mod of %d and %d is =%d",no1,no2,re);

    printf("\n ================***Addition operator***=================\n");

    getch();
    return 0;
}
