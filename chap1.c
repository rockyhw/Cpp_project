#include <stdio.h>

int main() {
	int nl, nb, nt, ch, prev_ch;
	nl = nb = nt = ch = prev_ch =  0;

	while ((ch = getchar()) != EOF) {
		//printf("\nprev char is %c  and current char is %c\n\n", ch, prev_ch);
		if (ch == '\n') {
			nl++;
			if (prev_ch == '\n'){
			//	printf("duplicate\n");
				continue;
			}
			putchar('\\');
			putchar('n');
		}
		else if (ch == '\t'){
			nt++;
			if (prev_ch == '\t') {
			//	printf("duplicate\n");
				continue;
			}
			putchar('\\');
			putchar('t');
		}
		else if (ch == ' '){
			nb++;
			if (prev_ch == ' ') { 
			//	printf("duplicate\n");
				continue;
			}
			putchar('\\');
			putchar('b');
		}
		else if (ch == '\\') {
			putchar('\\');
			putchar('\\');
		}	
		else 
			putchar(ch);
		prev_ch = ch;


	}
	printf("%d new lines, %d new tabs and %d new blanks", nl, nt, nb);
	return 0;
}
