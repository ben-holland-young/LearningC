#include <stdio.h>

/* Print a Fahrenheit-Celsius table
 * for fahr = 0, 20 .. 300 */




int main(void) {
    



	//Fahr to celsius 0 300 up in 10s
	
	float fahr;
	for(fahr = 0; fahr <= 300; fahr = fahr + 10){
//		float celsius = (5.0/9.0) * (fahr-32.0);
//		printf("%3.0f fahrenheit is %3.0f celsius! \n", fahr, celsius);

	}

	//backwards
	
	float fahrr;
	for(fahrr = 300; fahrr >= 300; fahrr--){
		float celsius = (5.0/9.0) * (fahrr-32.0);
		printf("%3.0f fahrenheit is %3.0f celsius! \n", fahrr, celsius);

	}

}
