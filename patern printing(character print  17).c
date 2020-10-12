#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0,ch='A',MM='B',LL='B',AA='A';

    printf("\n enter a row and column value=");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if( i==1)
            {
                printf(" %c ",ch);
                ch++;
            }
            else if( i==c)
            {
                printf(" %c ",AA);
                AA++;
            }
            else if( j==1)
            {
                printf(" %c ",MM);
                MM++;
            }
            else if(j==r)
            {
               printf(" %c ",LL);
                LL++;
            }
            else
            {
                printf("   ");
            }
        }
        if(ch>'Z')
            {
                ch='A';
            }
        printf(" \n");
    }
    getch();
    return 0;
}
