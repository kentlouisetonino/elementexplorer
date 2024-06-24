Compile:
	gcc -g -o src/main src/main.c

App:
	make Compile
	./src/main

Debug:
	make Compile
	gdb src/main
