#include <stdio.h>
#include <stdlib.h>


void func ( int [ ] , int *, int ) ;
void main ()
{
int a [ 10 ] ={4 ,2 ,1} , b = 2 , c = 4;
func (&a[2] ,&b , a[0] ) ;
printf("%d %d %d" , *a , b , c ) ;
}
void func ( int x [ ] , int *y , int z )
{
z = *x + *y ;
}
