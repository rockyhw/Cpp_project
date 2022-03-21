#include <stdio.h>

#define MAX_LEN 1000
// return the length of the word
int getLine(char s[], int limit) {
	int ch;
	int i;
	for (i = 0; i < limit -1 && (ch=getchar()) != EOF && ch != '\n'; ++i) {
		s[i] = ch;	
	}
	if (ch == '\n') {
		s[i] = '\n';	
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from []) {
	int i;
	i = 0;
	while ( (to[i] = from[i]) != '\0') {
		++i;
	}
}
int main() {
	char s[MAX_LEN];
	int len;	
	while ( (len = getLine(s, MAX_LEN)) > 0) {
		if (len > 10) {
			printf("%s\n", s);
		}
	}
	return 0;
}
