#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    printf("\n Enter value to check divide by 5 & 7 =");
    scanf("%d",&no);

    printf("\n =================================*****==============================");

    if(no%5==0 && no%7==0)
    {
        printf("\n Given value of %d is Divided by 5 & 7",no);
    }
    else if(no%5==0)
    {
       printf("\n Given value of %d is Divided by 5",no);
    }
    else if(no%7==0)
    {
        printf("\n Given value of %d is Divided 7",no);
    }
    else
    {
        printf("\n Given value of %d is not divided by 5 & 7");
    }

    printf("\n =================================*****==============================");

    getch();
    return 0;
}
