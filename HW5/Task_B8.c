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
    for (int i=1; i<=dlina_chisla; i++) {
        f=a/poryadok;
        c=f%10; 
        if (c == 9) count=count+1;
        //~ for (int j=1; j<=(dlina_chisla-1); j++){
            //~ f1=a/poryadok1;
            //~ c1=f1%10;
            //~ if (c==c1) goto QUIT_YES;
                //~ poryadok1=poryadok1*10;
                //~ //printf (" c=%d  c1=%d  poryadok1 = %d  dlina = %d   i= %d  j=%d \n ",c, c1,poryadok1, dlina_chisla,i ,j);
        //~ }
            poryadok=poryadok*10;
            //poryadok1 =poryadok*10;
            //dlina_chisla=dlina_chisla -1;
            //dlina=dlina-1;
    }
    if (count == 1) goto QUIT_YES;
    printf ("NO");
    goto END;
    QUIT_YES: 
        printf ("YES");
    END:
           
    return 0;
}

