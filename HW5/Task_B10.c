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
    int a=0, poryadok=0, poryadok1=0,  dlina_chisla, dlina, c=0, f=0, f1=0, c1=0, count=0;
            
    scanf ("%d", &a);
    
    poryadok = 1;
    poryadok1=poryadok *10;
    dlina_chisla = log10 ((float) a) +1;
    //dlina = dlina_chisla;
    //int dlina=dlina_chisla-1;
    for (int i=1; i<dlina_chisla; i++) 
        {
        
        f=a/poryadok;
        f1=a/poryadok1;
        //c=f%10; 
        c=f%10;
        c1=f1%10;
        //printf ("c = %d, c1= %d",c,c1);
        if ((c > c1) && (c != c1)) 
            {
                count = count+1;
                //printf ("   count=%d", count);
                poryadok=poryadok*10;
                poryadok1 =poryadok1*10;
            //dlina_chisla=dlina_chisla -1;
            //dlina=dlina-1;
            }
         else              
         
            {
            //count++;
             break;
            }
        }
        
    //~ printf ("count= %d",count);
    //~ printf ("dlina= %d", dlina_chisla);
    if ((count == dlina_chisla -1) || (a == 0))
        {
            printf ("YES");
        }
    else printf ("NO");
    return 0;
}

