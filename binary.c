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
           printf("\n Invalid number!!!");
       }
         while(temp>0)
       {
         dig=temp%10;
         if(dig>=2)
         {
             sum=(sum*10)+dig;
         }
         printf("\n %d  %d",dig,sum);
         temp=temp/10;
       }
       printf("\n binary value =%d",sum);
    getch();
    return 0;
}
