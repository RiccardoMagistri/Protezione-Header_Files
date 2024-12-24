#include<stdio.h>
#include"domanda_anagrafica.h"

Bool domande_anagrafica(void){

	Bool risultato = TRUE;
	char risposta[NUM_ANAGRAFICA];
	printf("Sei nato?\n");
	printf("[s]ì, [n]o\n");
	scanf(" %c", &risposta[0]);

	printf("Hai più di 18 anni?\n");
	printf("[s]ì, [n]o\n");
	scanf(" %c", &risposta[1]);

	printf("Ti senti giovane?\n");
	printf("[s]ì, [n]o\n");
	scanf(" %c", &risposta[2]);

	for(int i=0; i< NUM_ANAGRAFICA; i++){
		if(risposta[i]=='s'){
			continue;
		} else {
			return FALSE;
		}
	}
	return TRUE;
}