all: euler01 euler02 euler15

clean:
	rm euler01 euler02 euler15

euler01:
	gcc -Os -o euler01 -std=c99 euler01.c

euler02:
	gcc -Os -o euler02 -std=c99 euler02.c

euler03:
	gcc -Os -o euler03 -std=c99 euler03.c

euler15:
	gcc -Os -o euler15 -std=c99 euler15.c
