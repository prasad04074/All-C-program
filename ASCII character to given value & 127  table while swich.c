#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    printf("\n ==================***ASCII TABAL***=======================");
    printf("\n ASCII TABAL => \n\t 1] value to character Table \n\t 2] character to value Table \n\t");
    scanf("%d",&no);

    switch(no)
    {
    case 1:
        for(no=0;no<127;no++)
        {
            printf("\n %d = %c",no,no);
        }
        break;
    case 2:
        for(no=0;no<127;no++)
        {
            printf("\n %c = %d",no,no);
        }
        break;
    default:
        printf("\n Please enter a valid number");
    }

    printf("\n ==================***THANKS***=======================");
    getch();
    return 0;
}
