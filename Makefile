build:
	gcc -g -o bin/elementexplorer src/main.c

run:
	make build
	bin/elementexplorer

debug:
	make build
	gdb bin/elementexplorer
