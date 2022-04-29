#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int id ;
char name [ 50 ] ;
int crns [ 5 ] ;
} student ;
void fun ( int ) ;
int main () {
student A[ 100 ] , *p ;
A[ 0 ] . id = 333;
strcpy (A[ 0 ] . name , "jeff" ) ;
fun ( A[ 0 ] . id ) ;
printf ("%d" , A[ 0 ] . id ) ;
return 0;
}
void fun ( int id )
{
id = 111;
}