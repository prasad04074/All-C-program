#include<stdio.h>
#include<conio.h>
int main()
{
    int no=80,i=0;

    for(i=no,no=6;no<10;no++,i+=no);

    printf("\n no=%d",no);
    printf("\n i=%d",i);

    getch();
    return 0;
}
