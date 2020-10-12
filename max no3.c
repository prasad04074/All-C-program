#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,no3=0;

    printf("\n Enter a 3 Number to check it is Maximum for them : \n");
    scanf("%d%d%d",&no1,&no2,&no3);

    if((no1==no2)&&(no2==no3))
    {
        printf("\n Number is Nutral!!!");
    }
    else
    {
        if((no1>no2)&&(no2>no3))
        {
            printf("\n %d is maximum",no1);
        }
        else
        {
            if((no1>no2)&&(no2<no3))
            {
                printf("\n %d is maximum",no3);
            }
            else
            {
                if((no1<no2)&&(no3<no2))
                {
                    printf("\n %d is maximum",no2);
                }
                else
                {
                    if((no1==no2)&&(no2<no3))
                    {
                        printf("\n %d is maximum",no3);
                    }
                    else
                    {
                        if((no1==no3)&&(no2>no3))
                        {
                            printf("\n %d is maximum",no2);
                        }
                        else
                        {
                            if((no2==no3)&&(no1>no2))
                            {
                                printf("\n %d is maximum",no1);
                            }
                            else
                            {
                                 if((no1<no2)&&(no2<no3))
                                {
                                    printf("\n %d is maximum",no3);
                                }
                                else
                                {
                                    if((no1==no2)&&(no2>no3))
                                    {
                                        printf("\n %d is maximum",no2);
                                    }
                                    else
                                    {
                                        if((no1<no2)&&(no2==no3))
                                        {
                                            printf("\n %d is maximum",no2);
                                        }
                                        else
                                        {
                                            printf("\n Invalid number!!!");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    getch();
    return 0;
}
