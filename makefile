abc.exe:main.o big3.o reverse.o palindrom.o
	gcc -o abc.exe main.o big3.o reverse.o palindrom.o
main.o:main.c
	gcc -c main.c
big3.o:big3.c
	gcc -c big3.c
reverse.o:reverse.c
	gcc -c reverse.c
palindrom.o:palindrom.c
	gcc -c palindrom.c
clear:
	rm *.o