all: app

app: *.c
	gcc -c -Wall -Werror $^

.PHONY: clean

clean:
	rm *.o