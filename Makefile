CC=gcc

EXECS = test chap1 one_word_per_line

all: $(EXECS)
	echo "all done~ $(EXECS)"

test: test.c
	$(CC) -o $@ $^
chap1:chap1.c 
	$(CC) -o $@ $^
one_word_per_line: one_word_per_line.c
	$(CC) -o $@ $^

clean: 
	rm -rf $(EXECS) 

.PHONY:
	clean 
