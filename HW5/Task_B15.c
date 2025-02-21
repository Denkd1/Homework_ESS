//Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество четных чисел.

#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
    int a=0,c=0, count=0, b=0, number=0, i=0;
    char string[10500];
            
    gets (string);
    
    do 
    {
       if (string [b] == ' ') {
            for (i=c; i<b; i++){
                number = number*10+(string[i]-'0');              
            }
           // printf("number=%d ", number);
        c=b+1;
        b++;
        if (number%2 == 0) count++;
        number = 0;               
        }
        else b++;        
    
        a=string [b-1]+ string [b];
        if (a==80 && (int)string [b-1] == 48) a=a+1;
    }  while (a != 80);
    printf ("%d",count);
   
   
    return 0;
}

