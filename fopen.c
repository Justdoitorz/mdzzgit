#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char buf[17] = {0};
	int length;
	FILE *fp = fopen("fopen.c", "rb");

	if (fp == NULL) {
		printf("fopen fail\n");
		exit(1);
	}

	while (length = fread(buf, sizeof(char), 16, fp)) {
		//fwrite(buf, sizeof(char), length, stdout);	
		buf[length] = '\0';
		printf("%s", buf);
	}

	fclose(fp);

	return 0;
}
