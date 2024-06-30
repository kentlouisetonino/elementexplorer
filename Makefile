Build:
	gcc -g -o src/main src/main.c

App:
	make Build
	src/main

Debug:
	make Build
	gdb src/main
