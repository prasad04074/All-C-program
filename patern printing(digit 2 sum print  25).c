#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0;

    printf("\n Enter a row & column value =");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;i==0;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
