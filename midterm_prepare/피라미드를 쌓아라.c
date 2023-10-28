#include <stdio.h>

int main(void) {
	int floor;
	printf("¸î ÃþÀ¸·Î ½×À»±î¿ä? : ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < floor - 1-i; j++) {
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}