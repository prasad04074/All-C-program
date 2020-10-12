#include<stdio.h>
#include<conio.h>
int main()
{
           int no1=0,no2=0;

           printf("\n Enter a 2 number for Swapping = ");
           scanf("%d%d",&no1,&no2);

           printf("\n Given number Before swapping => \n\t Number 1] %d \t Number 2] %d",no1,no2);
           getch();

           no1=no1+no2;      // no1=14+12  = 26
           no2=no1-no2;      // no2=26-12  = 14
           no1=no1-no2;      // no1=26-14  = 12

           printf("\n\n Given number After swapping => \n\t Number 1] %d \t Number 2] %d",no1,no2);

           getch();
           return 0;
}
