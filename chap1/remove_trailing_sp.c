#include <stdio.h>

//get_line function to store a line of string to an array
int get_line(char arr[], int limit) {
	int ch, prev_ch;
	int i = 0;
	int mark = 0;
	prev_ch = '\0';
	//keep reading characters
	// conditions:	
		// space, previous is space,   not increment index of the mark
		// space, previous is not space,  increment index of the mark 
		// character,  increment index of the mark
	// 	if it is EOF, '\n', 
	while ( (ch = getchar()) != EOF && (ch != '\n') && i < limit -1) {
		if((prev_ch == ' ' || prev_ch == '\t') && (ch == ' ' || ch == '\t')){
		} else {
			mark++;
		}
		arr[i] = ch;
		prev_ch = ch;	

		++i;
	}
	if (mark < i){
		arr[mark] = '\0';
		return mark;
	}
	if (ch == '\n'){
		arr[i] = '\n';
		++i;
	}
	arr[i] = '\0';
	return i;
	
}
int main() {
	char arr1[50];
	int a;
	while((a = get_line(arr1,50)) > 1) {
		printf("%s\n", arr1);
		printf("The length is %d\n", a);
	}
	
}
