#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='/0';

    printf("\n Enter a key to check upper & lower case = ");
    scanf("%c",&ch);

    printf("\n ==================================*****===========================");

    switch(ch)
    {
        case('A'):
        case('B'):
        case('C'):
        case('D'):
        case('E'):
        case('F'):
        case('G'):
        case('H'):
        case('I'):
        case('J'):
        case('K'):
        case('L'):
        case('M'):
        case('N'):
        case('O'):
        case('P'):
        case('Q'):
        case('R'):
        case('S'):
        case('T'):
        case('U'):
        case('V'):
        case('W'):
        case('X'):
        case('Y'):
        case('Z'):
             printf("\n Given Character is upper case");
             break;
        case('a'):
        case('b'):
        case('c'):
        case('d'):
        case('e'):
        case('f'):
        case('g'):
        case('h'):
        case('i'):
        case('j'):
        case('k'):
        case('l'):
        case('m'):
        case('n'):
        case('o'):
        case('p'):
        case('q'):
        case('r'):
        case('s'):
        case('t'):
        case('u'):
        case('v'):
        case('w'):
        case('x'):
        case('y'):
        case('z'):
             printf("\n Given Character is Lower case");
             break;
        case('0'):
        case('1'):
        case('2'):
        case('3'):
        case('4'):
        case('5'):
        case('6'):
        case('7'):
        case('8'):
        case('9'):
              printf("\n Given value is Digits");
              break;
        default:
              printf("\n Given value if special symbol");
              break;
    }

    printf("\n ==================================*****===========================");
    getch();
    return 0;
}
