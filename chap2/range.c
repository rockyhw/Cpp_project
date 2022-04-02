#include <stdio.h>

#include <limits.h>
int main() {
	unsigned char uc;
	signed char c;
	unsigned short us;
	signed short ss;
	unsigned int ui;
	signed int si;
	unsigned long ul;
	signed long sl;

	printf("%d\n",CHAR_MAX);
	printf("%d\n", CHAR_MIN);
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	printf("%ld\n", LONG_MAX);
	printf("%ld\n", LONG_MIN);
	enum boolean {NO, YES};
	enum months {JAN = 1, FEB, MAR};
	printf("%d\n", JAN);
	return 0;
}
	
