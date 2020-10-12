#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='/0';

    printf("\n Enter a key to check upper & lower case = ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\n Given character is Upper case",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n Given character is Lower case",ch);
    }
    else
    {
        printf("\n Given character & Special Symbol");
    }

    getch();
    return 0;
}
