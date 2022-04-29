#include <stdio.h>
#include <stdlib.h>



typedef struct
{
int id ;
char name [ 50 ] ;
int crns [ 5 ] ;
} student ;

int main () {
student s1 , *p ;
p = &s1 ;
s1 . id = 333;
strcpy ( s1 . name , "Rouicha" ) ;
printf("%c%d" , (*p ) . name [ 0 ] , p->id ) ;
return 0;

}



