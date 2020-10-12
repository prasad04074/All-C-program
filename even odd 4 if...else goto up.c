#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    MM:
    printf("\n Enter a value to check it is Even or Odd: \n");
    scanf("%d",&no);

    if(no==0)
    {
        printf("\n Number is Nutral!!!");
        goto MM;
    }
    if(no%2==0)
    {
        printf("\n %d is Even",no);
    }
    else
    {
        printf("\n %d is Odd",no);
    }
    printf("\n THANKS & Good Bay!!!");
    getch();
    return 0;
}
