#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0,sum=0;

    printf("\n Enter a value row and column =");
    scanf("%d%d",&r,&c);

    printf("\n Enter a value of Sum=");
    scanf("%d",&sum);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i<=c || j<=r)
            {
                printf(" %3d ",sum);
                sum=sum+2;
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
