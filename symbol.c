#include <stdio.h>
#define lower 0
#define upper 300
#define step 10

int main(void){
	int fahr;

	for(fahr = lower; fahr <= upper; fahr = fahr + step){
       float celsius = (5.0/9.0) * (fahr-32);
       printf("%d fahrenheit is %3.0f celsius\n", fahr, celsius);

	}


}
