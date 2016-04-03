CFLAGS += -g -std=c99
ALL: 1.1.person 1.1.person.pahole.txt 1.3.car 2.1.string-int64

%: %.o

1.1.person.pahole.txt: 1.1.person
	pahole ./$< > $@
