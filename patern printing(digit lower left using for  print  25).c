#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0,sum=1;

    printf("\n Enter a row and column value =");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(sum=2,j=1;i>=j;j++,sum++)
        {
            printf(" %3d ",sum);
        }
        printf("\n");
    }
    getch();
    return 0;
}
