#include <stdio.h>

int is_multiple_3(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%s\n", is_multiple_3(n) ? "true" : "false");
	}
	return 0;
}
