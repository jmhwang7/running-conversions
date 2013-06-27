#ifndef UTILITIES_H
#define UTILITIES_H

/*  argShift
	Advances the beginning of the argv character array, and properly
	adjusts the number of arguments left.
*/
void argShift(int *argc, char **argv[], int optind);

/*  redirStdin
	Redirects the standard input to the given file.
	Also outputs error message if it fails.
*/
void redirStdin(char *filePath);

/*  redirStdout
	Redirects the standard output to the given file.
	Also outputs error message if it fails.
*/
void redirStdout(char *filePath);

#endif