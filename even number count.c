//Write a program to count Even number
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,even=0;

    printf("\n Enter a value to count Even number=");
    scanf("%d",&no);

    temp=no;

    if(temp<0)
    {
        temp=-1*temp;
    }
    while(temp>0)
    {
        dig=temp%10;
        if(dig%2==0)
        {
            if(dig!=0)
            {
               even++;
            }
        }
        temp=temp/10;
    }
    printf("\n Given number %d is even digit =%d",no,even);
    getch();
    return 0;
}
