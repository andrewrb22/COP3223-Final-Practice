#include <stdio.h>
#include <stdlib.h>

int main(){

int a = 1 , b = 2 , *p = 0;
p = &a ;
a = 2;
p = &b ;
b = 3;
printf ("%d" , *p ) ;

return 0;

}


