#include <stdio.h>


int main(void) {
	char c;



	
	while((c=getchar()) != EOF) {
		if (c == "\t") {
			c = '\t';

		}
		
		if (c == "\b") {
			c = '\b';

		}

		if (c == "\\") {
			c = '\\';

		}

	}



}
