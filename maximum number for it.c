#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,sum=0;

    printf("\n Enter a value =");
    scanf("%d",&no);
    temp=no;
    if(temp<0)
    {
        printf("\n Invalid number");
    }
    else
    {
       while(temp>0)
       {
          dig=temp%10;
          if(sum>=dig)
          {
             sum=sum;
          }
          else
          {
              sum=dig;
          }
          temp=temp/10;
       }
    }
    printf("\n given value of %d is maximun=%d",no,sum);

    printf("\n\n THANKS");
    getch();
    return 0;
}
