#include<stdio.h>
#include<conio.h>

int main()
{
    int choise=0,no1=0,no2=0,re=0;

    printf("\n chose a value = \n\n 1] Addition \n 2] Subtraction \n 3] Multiplication \n 4] Division \n 5] Mod \n 6] Exit");

    L:
    printf("\n\n Enter your choise:");
    scanf("%d",&choise);

    printf("\n =================================*******========================");

    switch(choise)
    {
    case 1:
        printf("\n Enter a 2 number of Addition=");
        scanf("%d%d",&no1,&no2);
        re=no1+no2;
        printf("\n Addition of %d And %d is =%d",no1,no2,re);
        printf("\n =================================*******========================");
        goto L;
        break;
    case 2:
        printf("\n Enter a 2 number of Subtraction=");
        scanf("%d%d",&no1,&no2);
        re=no1-no2;
        printf("\n Subtraction of %d And %d is =%d",no1,no2,re);
        printf("\n =================================*******========================");
        goto L;
        break;
    case 3:
        printf("\n Enter a 2 number of Multiplication=");
        scanf("%d%d",&no1,&no2);
        re=no1*no2;
        printf("\n Multiplication of %d And %d is =%d",no1,no2,re);
        printf("\n =================================*******========================");
        goto L;
        break;
    case 4:
        printf("\n Enter a 2 number of Division=");
        scanf("%d%d",&no1,&no2);
        re=no1/no2;
        printf("\n Division of %d And %d is =%d",no1,no2,re);
        printf("\n =================================*******========================");
        goto L;
        break;
    case 5:
        printf("\n Enter a 2 number of Mod=");
        scanf("%d%d",&no1,&no2);
        re=no1%no2;
        printf("\n Mod of %d And %d is =%d",no1,no2,re);
        printf("\n =================================*******========================");
        goto L;
        break;
    case 6:
        printf("\n Enter any key to close Application!!!");
        getch();
        break;
    default:
        printf("\n Invalid number ");
        break;
    }
    printf("\n thanks for using calculator service!!!");

    getch();
    return 0;
}
