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
    int a=0, poryadok=0, poryadok_obrat=1,  dlina_chisla, dlina, c=0, f=0, f1=0, c1=0, count=0, b=0, min=0,max=0;
            
    scanf ("%d", &a);
    
    poryadok = 10;
    
    dlina_chisla = log10 ((float) a) +1;
    c=a%10;
    max=min=c;
    //~ for (int i=1; i<dlina_chisla; i++)
    //~ {
        //~ poryadok_obrat=poryadok_obrat*10;
    //~ }
    
    //dlina = dlina_chisla;
    //printf ("dlina chisla = %d \n", dlina_chisla);
    //printf("poryadok obrat = %d \n", poryadok_obrat);
    for (int i=1; i<dlina_chisla; i++) 
        {
        
        f=a/poryadok;
        c=f%10;
        //printf ("c=%d ",c);
        if (c>max) max=c;
        else if (c<min) min=c;       
        //~ b=b+poryadok_obrat*c;
        poryadok = poryadok*10;
        //~ poryadok_obrat= poryadok_obrat/10;
        //~ //printf ("b=%d ", b);
        //f1=a/poryadok1;
        //c=f%10; 
       // c=f%10;
       // c1=f1%10;
        //printf ("c=%d c1=%d ", c, c1); 

        }
        
    //~ printf ("count= %d",count);
    //~ printf ("dlina= %d", dlina_chisla);
    printf("%d %d", min,max);
   
    return 0;
}

