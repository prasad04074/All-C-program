#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0,ch='A';

    printf("\n enter a row and column value=");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i<=j)
            {
                printf(" %c ",ch);
                ch++;
            }
            else
            {
                printf("   ");
            }
            if(ch>'Z')
            {
                ch='A';
            }
        }
        printf(" \n");
    }
    getch();
    return 0;
}

