.default: all

all: Calculator

clean:
	rm -rf Calculator *.o

blink5: Calculator.o
	g++ -Wall -Werror -g -O -o $@ $^

%.o: %cpp
	++ -Wall -Werror -g -O -c $^