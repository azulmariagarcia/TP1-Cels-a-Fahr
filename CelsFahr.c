
/* Azul Garcia

 * 14/04/2015
 
* Este programa hace una conversion de temperatura que se encuentran en grados Celsius, 
* la pasa a grados Fahrenheit. E imprime por pantalla dos columnas, una con la temperatura 
 * en grados Celsius y al lado su conversion en Fahrenheit.

*/


#include <stdio.h>


int main(void) {

   
float fahrenheit=0;
  
 float celsius;
  
 for(celsius = 0; celsius <= 30;++celsius){
           fahrenheit=(celsius*9)/5+32;
   
    printf("%.0f\t%.2f\n",celsius,fahrenheit);

          }
	
return 0;

}
