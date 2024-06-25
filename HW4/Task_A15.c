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

//int b=0,max=0, min=0;
//int a[3];
//float sum=0;
int x1=0,x2=0,e1=0,e2=0;
float k=0.0, b=0.0;


int main(int argc, char **argv)
{
    //scanf ("%d%d%d", &a, &b, &c);
    scanf ("%d%d%d%d", &x1,&e1,&x2,&e2);
    
    k = ((float)e2-(float)e1)/((float)x2-(float)x1);
    b = (float)e1-(((float)e2-(float)e1)/((float)x2-(float)x1))*(float)x1;
    printf ("%.2f %.2f",k,b);
    //max=a[1];
    //min=a[1];
    //for (int i=2; i<=3; i++) {
        //if (min>a[i]) min=a[i];
      //  if (max<a[i]) max=a[i];
    //}
        
    // sum = (float)(a+b+c)/3;
    //b > a ? printf("%d %d", a,b) : printf ("%d %d", b,a);
    //printf ("%d %d",min, max);
    //printf ("%d",max);       
    //printf ("%d\n", (a/100%10)*(a/10%10)*(a%10));
    //printf ("%d, %d, %d", a/100%10,a/10%10, a%10);
    //printf ("%d %d",a,b);
  
    return 0;
}

