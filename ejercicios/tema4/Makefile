CFLAGS += -g -std=c99
ALL: 1.1.person 1.1.person.pahole.txt

%: %.o

1.1.person.pahole.txt: 1.1.person
	pahole ./$< > $@
