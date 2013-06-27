#include <stdlib.h>
#include <stdio.h>
#include "utilities.h"

void argShift(int *argc, char **argv[], int optind) {
	*argc -= optind;
	*argv += optind;
}

void redirStdin(char *filePath) {
	if (!(freopen(filePath, "r", stdin))) {
		fprintf(stderr, "Could not redirect standard input");
		fprintf(stderr, " to the file given");
		exit(1);
	}
}

void redirStdout(char *filePath) {
	if (!(freopen(filePath, "a", stdout))) {
		fprintf(stderr, "Could not redirect standard output");
		fprintf(stderr, " to the file given");
		exit(1);
	}
}