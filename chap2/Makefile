CC=gcc

EXECS= range

all: $(EXECS)
	echo "all done~"
range: range.c
	$(CC) -o $@ $^

clean:
	rm -rf $(EXECS)

.PHONY:
	clean
