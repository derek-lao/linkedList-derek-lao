all: functions.o main.o
	gcc -o linkedlisttest.exe main.o functions.o

functions.o: functions.c node.h
	gcc -c functions.c

main.o: main.c node.h
	gcc -c main.c

run:
	./linkedlisttest.exe

clean:
	rm *.o
	rm *~
