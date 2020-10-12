#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,Even=0;

    printf("\n Enter a value =");
    scanf("%d",&no);
    temp=no;
    if(no<0)
    {
        printf("\n Invalid number");
    }
       while(temp>0)
       {
          dig=temp%10;
          if(dig%2==0)
          {
              Even=(Even*10)+dig;
          }
          temp=temp/10;
       }
       printf("\n Given value is %d into Even value is =%d",no,Even);
    getch();
    return 0;
}
