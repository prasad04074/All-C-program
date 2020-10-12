#include<stdio.h>
#include<conio.h>
int main()
{
    int no=80,i=0,j=0;

    i=no;
    no=5;
    j=no;

   while(no<10)
   {
       no++;
       i+=no;
   }

    printf("\n no=%d",j);
    printf("\n i=%d",i);

    getch();
    return 0;
}
