#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,nutral=0,odd=0;

    printf("\n Enter ab= value to check odd numbers=");
    scanf("%d",&no);

    temp=no;
    if(temp<0)
    {
        printf("\n Invalid number!!!");
    }
    while(temp>0)
    {
        dig=temp%10;
        if(dig%2==1)
        {
            odd=(odd*10)+dig;
        }
        temp=temp/10;
    }
    printf("\n Given value is %d into odd number is=%d",no,odd);
    getch();
    return 0;
}
