/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int v[50]; 
int main()
{
int i, vmax,n;
cout<<"introdu numarul de investitori";
cin>>n;
cout<<"Intodu sumele investite";
for ( i = 1; i <= n; i++ )
{ 
    cin>>v[i];
}
vmax = v[1];
for ( i = 2; i <= n; i++ )
{
if (v[i] > vmax ) 
vmax = v[i]; 
}
cout<<"Suma maxima de investitii este"<<vmax;
return 0;
}


