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
    int a=0, poryadok=0, dlina_chisla;
           
    scanf ("%d", &a);
    if (a>0) {
        poryadok = 10;
        dlina_chisla = log10 ((float) a) +1;
        int b[dlina_chisla];
        //~ printf("%d",dlina_chisla);
        b[1] = a%10;
        for (int i=2; i<=dlina_chisla; i++){
            b[i]= a/(poryadok)%10;
            
            if (b[i-1]==b[i]) goto QUIT_YES;
            poryadok = poryadok *10;
            //printf("%d \n", sum);
        }
     }
        printf ("NO");
        goto END;
        QUIT_YES: 
            printf ("YES");
        END:
                //printf("%d", sum);
    //}
    
        
    return 0;
}

