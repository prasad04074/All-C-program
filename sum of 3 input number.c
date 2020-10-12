//write a program to sum of 3 inputed number
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,sum=0,cnt=0,dig=0;

    up:
    printf("\n Enter a 3 digit number=");
    scanf("%d",&no);

    cnt=0;
    temp=no;
    if(temp<0)
    {
        temp=-1*temp;
    }
    while(temp>0)
    {
        temp=temp/10;
        cnt++;

        if(cnt>4)
        {
         break;
        }
    }
    if(cnt==3)
    {
        temp=no;
        while(temp>0)
        {
            dig=temp%10;
            sum=sum+dig;
            temp=temp/10;
        }
        printf("\n sum of %d is =%d",no,sum);
    }
    else
    {
        printf("\n Invalid number!!!");
        goto up;
    }
    getch();
    return 0;
}
