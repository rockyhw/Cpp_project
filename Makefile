CC=gcc

EXECS = test chap1 one_word_per_line count_array \
	hist_lengths hist_freq find_max_len find_len_80

all: $(EXECS)
	echo "all done~ $(EXECS)"

find_len_80:find_len_80.c
	$(CC) -o $@ $^
test: test.c
	$(CC) -o $@ $^
chap1:chap1.c 
	$(CC) -o $@ $^
one_word_per_line: one_word_per_line.c
	$(CC) -o $@ $^
count_array: count_array.c 
	$(CC) -o $@ $^
hist_lengths: hist_lengths.c
	$(CC) -o $@ $^
hist_freq: hist_freq.c
	$(CC) -o $@ $^
find_max_len:find_max_len.c
	$(CC) -o $@ $^

clean: 
	rm -rf $(EXECS) 

.PHONY:
	clean 
