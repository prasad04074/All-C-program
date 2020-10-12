#include<stdio.h>
#include<conio.h>
int main()
{
           int no1=0,no2=0,re=0;

           printf("\n Enter a 2 number for Swapping = ");
           scanf("%d%d",&no1,&no2);

           printf("\n Value for Before swapping %d and %d",no1,no2);
           getch();

           re=no1;
           no1=no2;
           no2=re;

           printf("\n\n\n value for After swapping %d and %d",no1,no2);

           getch();
           return 0;
}
