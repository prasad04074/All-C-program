#include<stdio.h>
#include<stdio.h>
int main()
{
    int r=0,c=0,i=0,j=0,n1=1,n2=0,n3=0;

    printf("\n Enter a row and column =");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;i>=j;j++)
        {
            printf(" %d ",n3);

            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        printf("\n");
    }
    getch();
    return 0;
}
