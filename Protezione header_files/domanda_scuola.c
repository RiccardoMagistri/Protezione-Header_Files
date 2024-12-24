#include <stdio.h>
#include "domanda_scuola.h"

Bool domande_scuola(void){

    Bool risultato = TRUE;
    char scelta[NUM_SCUOLA];

    printf("Ti piace la scuola?\n");
    printf("[s]i, [n]o\n");
    scanf(" %c", &scelta[0]);
    
    printf("Sei mai stato bocciato?\n");
	printf("[s]ì, [n]o\n");
	scanf(" %c", &scelta[1]);

	printf("Rispondi sì!?\n");
	printf("[s]ì, [n]o\n");
	scanf(" %c", &scelta[2]);

    for (int i = 0; i < NUM_SCUOLA; i++)
    {
        if (scelta[i] == 's')
        {
            continue;
        } else
        {
            return FALSE;
        }

    }
    
    return TRUE;
    
}