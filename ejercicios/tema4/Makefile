CFLAGS += -g -std=c99
ALL: 1.1.person 1.1.person.pahole.txt 1.3.car 2.1.string-int64 2.2.mayus 2.3.chorradas

%: %.o

1.1.person.pahole.txt: 1.1.person
	-pahole ./$< > $@
