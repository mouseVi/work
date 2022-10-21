#include <stdio.h>

void print(char a);

int main() {
	unsigned char u = 160;
	signed char s = 160;
	printf("u = %d\ns = %d\n", u, s);
	print(u);
	print(s);
	return 0;
}

void print(char x) {
	unsigned char m = 1 << 7;
	for (int i = 0; i < 8; i++) {
		printf("%c", (x & m) > 0 ? '1' : '0');
		x <<= 1;
	}
	printf("\n");
}
//из мэйна