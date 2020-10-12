#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,i=0;

    printf("\n Enter a value to print a sum =");
    scanf("%d",&no);

    for(i=1;i<=10;i++)
    {
        printf("\n %d",no*i);
    }

    getch();
    return 0;
}
