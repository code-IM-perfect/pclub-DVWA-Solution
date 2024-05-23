#include <stdio.h>
#include <string.h>

int main() {
	int kk=9;
	memset(&kk, 8, sizeof(kk));
	printf("%d", kk);
	printf("\n");

	return 0;
}