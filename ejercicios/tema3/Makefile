CFLAGS += -std=c99 -g

ALL: 1.1.printf-sizeof 1.2.arrays 1.3.cadenas 1.4.matrices 2.1.punteros 2.2.arrays.punteros 2.3.punteros.matrices

check:
	checkpatch.pl -q --no-tree -f --fix-inplace *.c

%: %.o

