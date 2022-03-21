#include <stdio.h>
//external varialbe must be declared outside of any functions, exactly once. Any funciton that needs
// to access the variable must declare it
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];
int get_line(void);
void copy(void);
int main() {
	int len;
	extern int max;
	extern char longest[];
	max = 0;
	while ((len = get_line()) > 0) 
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0) 
		printf("%s", longest);
	return 0;
}
int get_line(void) {
	int ch, i;
	extern char line[];
	for (i = 0; i < MAXLINE -1&& (ch = getchar()) != EOF && ch != '\n'; ++i) {
		line[i] = ch;
	}
	if (ch == '\n') {
		line[i] = '\n';
		++i;
	}
	line[i] = '\0';
	return i;
}
void copy(void) {
	int i;
	extern char line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
	
	
	
