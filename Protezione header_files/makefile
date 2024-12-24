all: main

clean: main main.o domanda_anagrafica.o domanda_scuola.o
	rm -rf main main.o domanda_anagrafica.o domanda_scuola.o

main: main.o domanda_anagrafica.o domanda_scuola.o
	gcc -o main main.o domanda_anagrafica.o domanda_scuola.o

main.o: domanda_anagrafica.h domanda_scuola.h main.c
	gcc -c -o main.o main.c

domanda_anagrafica.o: domanda_anagrafica.h domanda_anagrafica.c bool.h
	gcc -c -o domanda_anagrafica.o domanda_anagrafica.c

domanda_scuola.o: domanda_scuola.h domanda_scuola.c bool.h
	gcc -c -o domanda_scuola.o domanda_scuola.c
