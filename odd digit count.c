//write a number into count odd number
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,odd=0;

    printf("\n Enter a value to count odd digit=");
    scanf("%d",&no);

    temp=no;

    if(temp<0)
    {
        temp=-1*temp;
    }
    while(temp>0)
    {
        dig=temp%10;
        if(dig%2==1)
        {
            odd++;
        }
        temp=temp/10;
    }
    printf("\n Given value %d into odd digit =%d",no,odd);
    getch();
    return 0;
}
