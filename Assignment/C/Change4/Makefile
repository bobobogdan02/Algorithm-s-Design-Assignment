all: exe

exe: main.o greedy.o coinChange.o
	  gcc main.o greedy.o coinChange.o -o exe

main.o: main.c
	  gcc -c main.c

greedy.o: greedy.c
	  gcc -c greedy.c

coinChange.o: coinChange.c
	  gcc -c coinChange.c

clean:
	  rm *.o exe
	
