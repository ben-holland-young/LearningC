#include <stdio.h>

int main(void){
	

	int c, n1, b1, t1;
	n1 = 0;
	b1 = 0;
	t1 = 0;
	while((c = getchar()) != EOF) {
		if (c == '\n')
			++n1;
		if (c == '\t')
			++t1;
		if (c == ' ')
			++b1;

	}
		
	printf("%d new lines, %d blank spaces and %d tabs\n", n1, b1, t1); 


}
