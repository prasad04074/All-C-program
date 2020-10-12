#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0,ch='A';

    printf("\n Enter a row & column =");
    scanf("%d%d",&r,&c);

    printf("\n=====================****==================\n");
    for(i=1;i<r;i++)
    {
        for(j=1;j<c;j++)
        {
            if(j==1 || i==c || i>=j)
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
        printf("\n");
    }
    printf("\n=====================****==================\n");
    getch();
    return 0;
}
