CC = gcc
LIBS = -lm
CFLAGS = -Wall -Wextra

all: bisection newton_method secant

bisection: 1-bisection.c
	$(CC) -o bisection 1-bisection.c $(LIBS) $(CFLAGS)
newton_method: 2-newton_method.c
	$(CC) -o newton_method 2-newton_method.c $(LIBS) $(CFLAGS)
secant: 3-secant.c
	$(CC) -o secant 3-secant.c $(LIBS) $(CFLAGS)
fixedPoint: 4-fixed_point.c
	$(CC) -o fixed_point 4-fixed_point.c $(LIBS) $(CFLAGS)

clean:
	rm -f bisection newton_method secant fixed_point
