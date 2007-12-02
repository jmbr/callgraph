#include <stdio.h>
#include <stdlib.h>

static void foo(int n);
static void bar(int n);
static void baz(int n);

int
main(int argc, char *argv[])
{
	foo(23);

	exit(EXIT_SUCCESS);
}

void 
foo(int n)
{
	bar(n);
}

void
bar(int n)
{
	baz(n);
}

void
baz(int n)
{
	return;
}
