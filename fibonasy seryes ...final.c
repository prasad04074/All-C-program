#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=1,no2=0,no3=0,count=0;

    printf("\n Enter the value to print Fibonasy series : \n");
    scanf("%d",&count);

    for(count;count>0;count--)
    {
        printf("\t%d",no3);
        no3=no1+no2;
        no1=no2;
        no2=no3;
    }

    getch();
    return 0;
}
