#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int id ;
char name [ 50 ] ;
int crns [ 5 ] ;
} student ;
void fun ( student a , student b ) ;
int main () {
student a , b ;
int i ;
a . id = 111;
b . id = 333;
fun ( a , b ) ;
printf ("%d" , a . id ) ;
return 0;
}
void fun ( student a , student b )
{
a = b ;
}