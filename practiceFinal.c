#include <stdio.h>
#include <stdlib.h>

int main(){

int counter = 0;
for ( counter = 2 ; counter <10; counter++)
{
i f ( counter <5 ) continue ;
e l s e i f ( counter >=6 ) break ;
p r i n t f (” Inside Loop ” ) ;
counter ++;
}
p r i n t f (” Outside Loop ” ) ;

return 0;

}


