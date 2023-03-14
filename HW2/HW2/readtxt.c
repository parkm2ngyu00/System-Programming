#include <stdio.h>
#include <stdbool.h>
#define MAX  100

int main(void) {
	
	char line[MAX];
	char *pLine;
	FILE *fp = fopen("poem.txt", "r");
	while (!feof(fp)) {
		pLine = fgets(line, MAX, fp);
		printf("%s", pLine);
	}
	fclose(fp);

	return 0;
}
