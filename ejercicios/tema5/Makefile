CFLAGS += -std=c99 -g

ALL: 1.1.swap 2.2.complejos

%:%.o

check:
	checkpatch.pl -q --no-tree -f --fix-inplace *.c

2.2.complejos.libcomplx.o: 2.2.complejos.libcomplx.c 2.2.complejos.libcomplx.h
2.2.complejos: 2.2.complejos.main.o 2.2.complejos.libcomplx.o 2.2.complejos.libcomplx.h
	$(CC) $(CFLAGS) -lm -o $@ 2.2.complejos.main.o 2.2.complejos.libcomplx.o
