#include <stdio.h>

int main() {
	int minute, second;
	float res = 0.0;

	while (scanf("%i:%i\n", &minute, &second) == 2) {
		res = 60 / (minute + (float) second / 60);
		printf("%.2f\n", res);
	}

	return 0;
}