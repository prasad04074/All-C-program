//program to write 1st number raise 2nd
#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,pow=0,i=0;

    printf("\n Enter to number for 1st raise to second =");
    scanf("%d%d",&no1,&no2);

    for(i=0,pow=1;i<no2;i++)
    {
        pow=pow*no1;
    }

    printf("\n (%d) ^ %d = %d",no1,no2,pow);
    getch();
    return 0;
}
