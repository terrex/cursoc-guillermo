CFLAGS += -std=c99 -g

ALL: 1.1.swap

%:%.o

check:
	checkpatch.pl -q --no-tree -f --fix-inplace *.c
