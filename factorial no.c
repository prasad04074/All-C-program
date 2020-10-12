#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,fact=0,temp=0;

    printf("\n Enter a value to calculate factorial =");
    scanf("%d",&no);

    if(no<0)
    {
        printf("\n Invalid number!!!");
    }
    for(fact = 1,temp = no;temp >1;fact *=temp,temp--);

    printf("\n Given value %d is factorial =%d",no,fact);

    printf("\n=========================****==========================");
    getch();
    return 0;
}
