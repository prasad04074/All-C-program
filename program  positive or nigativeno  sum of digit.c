#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,sum=0;

    printf("\n Enter a value =");
    scanf("%d",&no);

    temp=no;
    if(no<0)
    {
        while(temp<0)
        {
            dig=temp%10;
            sum=sum+dig;
            temp=temp/10;
        }
    }
    else
    {
       while(temp>0)
       {
          dig=temp%10;
          sum=sum+dig;
          temp=temp/10;
       }
    }
    printf("\n the sum of digit %d is =%d",no,sum);
    getch();
    return 0;
}
