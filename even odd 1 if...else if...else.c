#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    printf("\n Enter number to check Even or Odd :");
    scanf("%d",&no);

    if(no==0)
    {
        printf("\n Number is Nutral");
    }
    else if(no%2==0)
    {
        printf("\n %d is Even",no);
    }
    else
    {
        printf("\n %d is Odd",no);
    }
    printf("\n THANKS &Good Bay");
    getch();
    return 0;
}
