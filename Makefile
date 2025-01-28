CC = gcc
LIBS = -lm
CFLAGS = -Wall -Wextra

all: bisection newton_method secant

bisection: bisection.c
	$(CC) -o bisection bisection.c $(LIBS) $(CFLAGS)
newton_method: newton_method.c
	$(CC) -o newton_method newton_method.c $(LIBS) $(CFLAGS)
secant: secant.c
	$(CC) -o secant secant.c $(LIBS) $(CFLAGS)

clear:
	rm -f bisection newton_method secant
