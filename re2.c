#include <stdio.h>

int foo(int v1, int v2, int v3){
	int result;
	result = v1 + v2 + v3;
	return result;
}

int main() {
	int v1 = 0;	
	char buf[1024] = {0, };
	foo(1, 2, 10);
	printf("%d",foo(5, 1, 2));
	return 0;
}
