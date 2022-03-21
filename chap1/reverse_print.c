#include <stdio.h>

//get_line, store the string in an array
// reverse_print, print character from the end of the array, utilizing the length of the array

int get_line(char arr[], int limit) {
	int i;
	int ch;
	for (i = 0; i < limit -1 && (ch = getchar()) != EOF && ch != '\n'; ++i) {
		arr[i] = ch;
	}
	if (ch == '\n') {
		arr[i] = '\n';
		++i;
	}
	arr[i] = '\0';
	
	return i;
		
}
int reverse_print(char arr[], int len) {
	for (int i = len -1; i >= 0; --i) {
		printf("%c", arr[i]);
	}
	printf("\n");
		
}
int main() {
	int len;
	char arr[50];
	while((len = get_line(arr, 50)) > 1) {
		reverse_print(arr, len);
	}
	return 0;
}
