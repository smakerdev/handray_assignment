#include <stdio.h>
#include <stdlib.h>

int foo(int v1) {
	if (v1 < 0) {
		exit(0);
	} else if (v1 == 1 || v1 == 2) {
		return 1;
	} else {
		return foo(v1 - 1) + foo(v1 - 2);
	}
}

int main() {
	printf("%d\n", foo(10));
	return 0;
}
