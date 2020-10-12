#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0,sum=0,k=0,m=0;

    printf("\n Enter a value row and column =");
    scanf("%d%d",&r,&c);

    printf("\n Enter a table =");
    scanf("%d",&m);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i>=j)
            {
                k=k+1;
                sum=k*m;
                printf(" %d ",sum);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}

