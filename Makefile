build:
	gcc -g -o bin/elementexplorer src/main.c

debug:
	make build
	gdb bin/elementexplorer

elementexplorer:
	make build
	bin/elementexplorer
