firsttimer: tokenizer.o history.o UI.o
	cc -o firsttimer tokenizer.o history.o UI.o

clean:
	rm -f *.o firsttimer *# *~ .#*
run:
	./firsttimer

history.o: tokenizer.h history.h history.c

tokenizer.o: tokenizer.h tokenizer.c

UI.o: tokenizer.h history.h UI.c
