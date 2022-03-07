#include <stdio.h>

int main() {
	
	// create an array of size 20, assuming max word size has 20 characters
	// number at each index represents number of words that has the length that equals index + 1;
	// for each word, increment number at corresponding index 
	// use cur_len to keep track of the length of the current word

	// no need to use state

	int nlength[20];
	int ch;
	int cur_len = 0;
	for (int i = 0; i < 20; ++i) {
		nlength[i] = 0;
//		printf("%d ", nlength[i]);
	}
	printf("\n");

	
	while ( (ch = getchar()) != EOF) {
//		printf("cur_len is %d\n", cur_len);
		if (ch == ' ' || ch == '\n' || ch == '\t') {
			++nlength[cur_len-1];
			cur_len = 0;
		} else {
			++cur_len;
		}
			
	}

	printf("%-10s", "count");
	for (int i = 0; i < 20; ++i) 
		printf("%3d ", nlength[i]);
	printf("\n");
	printf("%-10s", "length");
	for (int i = 1; i < 21; ++i)
		printf("%3d ", i); 
	return 0;
}
