#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,i=0,j=0;

    printf("Enter a starting number=");
    scanf("%d",&no1);

    printf("Enter a End number=");
    scanf("%d",&no2);

    if(no1<=no2)
    {
       for(i=1;i<=10;i++)
       {
           for(j=no1;j<=no2;j++)
           {
               printf("  %3d",j*i);
           }
           printf("\n");
       }
    }
    else
    {
       for(i=1;i<=10;i++)
       {
           for(j=no1;j>=no2;j--)
           {
               printf("  %3d",j*i);
           }
           printf("\n");
       }
    }
    getch();
    return 0;
}
