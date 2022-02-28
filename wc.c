#include <stdio.h> 
#definte IN 1
#definte OUT 0
int main() {
	int nc, nw, nl, ch;

	nc = nw = nl = 0;
	state = OUT;
	while( (ch = getchar()) != EOF) {
		++nc;
		if (ch == '\n') {
			++nl;
		}
		if (ch == ' ' || ch == '\t' || ch == '\n') {
			state =  OUT;
		} else if(state == OUT) {
			++nw;
			state = IN;
		}
	}
	printf("%d %d %d\n", nc, nw, nl);
	return 0;
}
