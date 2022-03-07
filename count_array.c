#include <stdio.h>

int main() {
	int ch, nwhite, nother;

	nwhite = nother = 0;

	int digit[10];
	for (int i = 0; i < 10; ++i) {
		digit[i] = 0;
	}

	while ( (ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9') 
			++digit[ch - '0'];
		else if (ch == ' '|| ch == '\t' || ch == '\n') {
			++nwhite;
		}
		else { 
			++nother;
		}

	}
	for (int i = 0; i < 10; ++i) 
		printf("%d ", digit[i]);

	printf("\n%d %d\n", nwhite, nother);
	return 0;
}

