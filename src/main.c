#include <unistd.h>
#include <stdio.h>

int main(void)
{
	printf("isatty %d\n", isatty(0));

	return 0;
}
