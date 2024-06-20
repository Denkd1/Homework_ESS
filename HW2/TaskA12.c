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

int a=0,b=0,c=0;
//float sum=0;


int main(int argc, char **argv)
{
    //scanf ("%d%d%d", &a, &b, &c);
    scanf ("%d", &a);
    // sum = (float)(a+b+c)/3;
   
    printf ("%d", a/100%10+a/10%10+a%10);
    //printf ("%d, %d, %d", a/100%10,a/10%10, a%10);
    //printf ("%d*%d*%d=%d",a,b,c,a*b*c);
    //~ printf ("  ***\n");
    //~ printf (" *****\n");
    //~ printf ("*******\n");
    //~ printf (" HHOHH\n");
    //~ printf (" ZZZZZ");
    return 0;
}

