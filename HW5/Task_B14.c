/*
 * Task1
 * 
 * Copyright 2024 kd <kd@RUS-71Y2R72>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
    int a=0, poryadok=0, poryadok_obrat=1,  dlina_chisla, dlina, c=0, f=0, f1=0, c1=0, count=0, b=0, min=0,max=0, size_length=0, chet=0,nechet=0;
    char string[10500];
            
    gets (string);
    
    //printf ("b=%d before  ",b);
    do 
    {
        if (string [b] == ' ') {
            count++;
            b++;
             }
        else b++;        
    
        //printf ("b=%d  ",b);
        //printf ("count= %d ",count);
        a=string [b-1]+ string [b];
        if (a==80 && (int)string [b-1] == 48) a=a+1;
        //printf ("a=%d ", a);
    }  while (a != 80);
    printf ("%d",count);
   
   
    return 0;
}

