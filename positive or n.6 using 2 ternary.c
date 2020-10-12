#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    printf("\n Enter a value to check it is Positive or Nigative : \n");
    scanf("%d",&no);

    (no==0)?printf("\n Number is Nutral!!!"):(no>0)?printf("\n %d is Positive",no): printf("\n %d is Nigative",no);

    printf("\n THANKS &Good Bay");
    getch();
    return 0;
}
