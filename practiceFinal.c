#include <stdio.h>
#include <stdlib.h>

void fun ( int *p ) ;
void main ()
{
int x [ 1 0 0 ] = { 3 ,2 ,1} ;
fun (x ) ;
p r i n t f (”%d” , x [ 0 ] ) ;
}
void fun ( int *p)
{
*p = 1;
}




