#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,fact=1,temp=0;
    L:

    printf("\n Enter a number to calculate factorial :");
    scanf("%d",&no);

    if(no<0)
    {
        printf("\n Invalid number!!!");
        goto L;
    }
    temp=no;
    while(temp>1)
    {
        fact*=temp;
        temp--;
    }
    printf("\n factorial is %d = %d",no,fact);

    getch();
    return 0;
}
