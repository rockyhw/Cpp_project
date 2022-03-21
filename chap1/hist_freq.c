#include <stdio.h>

int main() {
	// ascii character range from 0 to 127

	// create an array with size 128, number at each index represents the frequency of the character that has an integer value of the index;
	// for each character read, increment the number at the index  of the integer value of that character
	int ch;
	int freq[128];
	for (int i = 0; i < 128; ++i) 
		freq[i] = 0;
	
	while ( (ch = getchar()) != EOF) {
		++freq[ch];
	}

	printf("%6s", "count");
	for (int i = 0; i < 128; ++i) 
		printf("%3d ", freq[i]);
	printf("\n");
	printf("%6s", "freq");
	for (int i = 0; i < 128; ++i) 
		printf("%3c ", i);

	return 0;
}
