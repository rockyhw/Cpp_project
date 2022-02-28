#include <stdio.h>

#define ADD_LINE 1
#define  NOT_ADD 0 
int main() {
	// for every word encounter, print a next line character
	// can use the reference for the word count program
	// use variable state to indicate whether in a word or not
	// when entering a new word, print next line character
	
	int ch, state;

	while ( (ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\t' || ch == '\n') {
			if (state == ADD_LINE) 
				putchar('\n');
				state = NOT_ADD;
		} else{
			putchar(ch);
			state = ADD_LINE;
		}
	}
	return 0;
}
