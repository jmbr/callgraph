#include <stdio.h>
#include <stdlib.h>

static void foo(void);
static void bar(void);
static void baz(void);

int
main(int argc, char *argv[])
{
	foo();

	exit(EXIT_SUCCESS);
}

void 
foo(void)
{
	bar();
}

void
bar(void)
{
	baz();
}

void
baz(void)
{
	return;
}
