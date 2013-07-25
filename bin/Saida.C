#include <stdio.h>
#include<ctype.h> 
#include <stdlib.h> 
#include <math.h> 
#include <string.h> 
#define false 0
#define true 1  //  "Fatorial recursivo" 


int	an, n ;

int    fatorial (int numero) 
{ 


int	c, b, k ;


 k =1;

 if (  numero  == 0 ) {

 c = k ;


 } else {  
 b = numero  -  k ;

 c = c  +  numero  *  fatorial ( b );

 } 

return  c ;
} 



int main() {
 printf  (    "fatorial de qual numero?"   ) ;  printf("\n") ;

 scanf  ( n  );

 an = fatorial ( n );


 printf  (    "o fatorial de "  n  " é: "  an   ) ;  printf("\n") ;

return 0; 
 } 

