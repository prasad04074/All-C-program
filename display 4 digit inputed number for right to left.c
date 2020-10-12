//write a program for 4 digit number inputed number right to left
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,cnt=0,rev=0;

    printf("\n Enter a 4 number to it's revers=");
    scanf("%d",&no);

    temp=no;
    if(temp<0)
    {
        temp=-1*temp;
    }
    while(temp>0)
    {
        temp=temp/10;
        cnt++;
        if(cnt>5)
        {
            break;
        }
    }
    if(cnt==4)
    {
        temp=no;
        while(temp>0)
        {
            dig=temp%10;
            rev=(rev*10)+dig;
            temp=temp/10;
        }
        printf("\n Given number %d it revers =%d",no,rev);
    }
    else
    {
        printf("\n Invalid number!!!");
    }
    getch();
    return 0;
}
