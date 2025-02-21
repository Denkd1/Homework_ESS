//Составить программу для вычисления НОД с помощью алгоритма Евклида. Даны два натуральных числа. Найти наибольший общий делитель.

#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
    int a=0,c=0, count=0, b=0, number=0, i=0;
    char string[10500];
    
    scanf("%d %d", &a,&b);
    while(b) {
        c = a % b;
        a = b;
        b = c; 
    }
    printf("%d", a);
   
   
    return 0;
}

