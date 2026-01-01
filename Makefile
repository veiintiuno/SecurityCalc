CC=gcc
CFLAGS=-Iinc

securecalc: src/main.c src/calculator.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f securecalc