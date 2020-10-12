#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,sum=0;

    printf("\n Enter a value =");
    scanf("%d",&no);

    temp=no;
       while(temp>0)
       {
          dig=temp%10;
          sum=(sum*10)+dig;
          temp=temp/10;
       }
       if(no==sum)
       {
           printf("\n Given value %d is palindrom. \n",no);
       }
       else
       {
         printf("\n Given value %d is not palindrom.\n",no);
       }
    printf("\n THANKS");
    getch();
    return 0;
}
