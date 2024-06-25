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

int max=0, min=0;
int a[5];
//float sum=0;


int main(int argc, char **argv)
{
    //scanf ("%d%d%d", &a, &b, &c);
    scanf ("%d%d%d%d%d", &a[1],&a[2],&a[3],&a[4],&a[5]);
    max=a[1];
    min=a[1];
    for (int i=2; i<=5; i++) {
        if (min>a[i]) min=a[i];
        if (max<a[i]) max=a[i];
    }
        
    // sum = (float)(a+b+c)/3;
    //b > a ? printf("%d %d", a,b) : printf ("%d %d", b,a);
    //printf ("%d %d",min, max);
    printf ("%d",min+max);       
    //printf ("%d\n", (a/100%10)*(a/10%10)*(a%10));
    //printf ("%d, %d, %d", a/100%10,a/10%10, a%10);
    //printf ("%d %d",a,b);
  
    return 0;
}

