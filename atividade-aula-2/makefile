all: main.o hello_world.o

main.o: main.c
	clang -o main.o main.c
	chmod +x main.o

hello_world.o: hello_world.c
	clang -o hello_world.o hello_world.c
	chmod +x hello_world.o

run: all
	./main.o $(n) ./hello_world.o

clean:
	rm -fr *.o*