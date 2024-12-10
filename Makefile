CC = clang
CFLAGS = -g -Wall -Werror -Wextra
LDLIBS = -lcs50

# List all your programs here
PROGRAMS = hello scores scrabble

all: $(PROGRAMS)

substitution: substitution.c
	$(CC) $(CFLAGS) -o substitution substitution.c $(LDLIBS)

clean:
	rm -f $(PROGRAMS)
	rm -f *.o 