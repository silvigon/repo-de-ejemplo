#include <stdio.h>
#include <stdlib.h>

#define SAMPLE_TEXT "sample text\n"

int main(int argc, char **argv) {
	if (argc > 1) printf("%s\n", argv[1]);
	else          printf(SAMPLE_TEXT);
	return(0);
}
