#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,i=0;

    printf("\n Enter a value to print a table :");

    scanf("%d",&no);

    for(i=1;i<=10;i++)
    {
        printf("\n %3d   %3d   %3d   %3d   %3d",no*i,(no+1)*i,(no+2)*i,(no+3)*i,(no+4)*i);
    }
    getch();
    return 0;
}
