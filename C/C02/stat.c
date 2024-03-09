#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char *p;
	char buf1[20];
	char buf2[20];
	size_t len;

	if (sizeof(buf2) < strlen("Hello world!"))
		errx("strncpy: truncating character sequence");
	strncpy(buf2, "Hello world!", sizeof(buf2));
	len = strnlen(buf2, sizeof(buf2));

	printf("[len = %zu]: ", len);
	fwrite(buf2, 1, len, stdout);
	putchar('\n');

	if (sizeof(buf1) < strlen("Hello world!"))
		errx("stpncpy: truncating character sequence");
	p = stpncpy(buf1, "Hello world!", sizeof(buf1));
	len = p - buf1;

	printf("[len = %zu]: ", len);
	fwrite(buf1, 1, len, stdout);
	putchar('\n');

	exit(EXIT_SUCCESS);
}
