OBJECTS = main.o well.o
CC = g++
CFLAGS = -c

all: $(OBJECTS)
	$(CC) $(OBJECTS)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

well.o: well.cpp well.h
	$(CC) $(CFLAGS) well.cpp

.PHONY: clean
clean:
	@rm -f *.o *.out
