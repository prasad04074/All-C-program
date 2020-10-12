#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,Fact=0,Temp=0;

    printf("\n Enter a value to calculate factorial :");
    scanf("%d",&No);

    if(No<0)
    {
        printf("\n Invalid number!!!");
    }
    for(Fact=1,Temp=No;Temp>1;Fact*=Temp,Temp--);

        printf("\n Factorial of %d = %d",No,Fact);
    getch();
    return 0;
}
