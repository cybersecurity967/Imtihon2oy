
#include <stdio.h>
int kattasi(int a, int b)
{
	return (a > b) ? a : b;
}
int main()
{
	int a, b;
	if (scanf("%d %d", &a, &b) != 2) {
		return 1;
	}
	printf("Katta son: %d\n", kattasi(a, b));
	return 0;
}
