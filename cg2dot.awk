#!/bin/gawk -f

{
	edges[$1, $2] = 1;
}

END {
	print "digraph G {";
	for (combined in edges) {
		split(combined, edge, SUBSEP);
		printf("\t\"%s\" -> \"%s\";\n", edge[1], edge[2]);
	}
	print "}";
}
