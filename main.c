/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int v[50]; 
int i, vmax,n;
int main()
{

    printf("introducem numarul de investitori  ");vmax = v[0];
    scanf("%d",&n);
    printf("sumele investite\n ");
for ( i = 0; i < n; i++ )
{ 
   
    scanf("%d",&v[i]);

if (v[i] > vmax )
vmax = v[i]; 
}
    printf("Suma maxima investita este  %d",vmax);
return 0;
}



