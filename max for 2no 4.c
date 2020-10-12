#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0;
    HH:
    printf("\n Enter 2 Number to check maximum for them :");
    scanf("%d%d",&no1,&no2);

    if(no1==no2)
    {
        printf("\n Number is Equale");
        goto HH;
    }
    printf("%d is Maximum",(no1>no2)? no1:no2);

    printf("\n THANKS & Good Bay");

    getch();
    return 0;
}
