.PHONY: all test clean

all: hanoi

hanoi: hanoi.c
	gcc ./hanoi.c -Wall -o hanoi

test: all
	for number in 1 2 3 4 5; do \
		./hanoi < input_$$number.txt >> output.txt ; \
		done

clean:
	rm -f hanoi output.txt
