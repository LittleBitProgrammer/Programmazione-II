#include <stdio.h>

int main(void){
    printf("\nFrom the sea to shining C\n");
    return 0;
}

/**
 * * Riga 1
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * ? All'interno del compilatore C si trova un preprocessore, quando viene dato il comando di compilazione viene richiamato tale preprocessore.
 * ? Le righe di codice che iniziano con il carattere # contengono comandi per il preprocessore. In questo caso, trovando la riga #include, il preprocessore include il file 
 * ? D'intestazione (header) stdio.h
 * ? I simbolli < e > che racchiudono il nome del file indicano che esso si trova al solito posto, il quale dipende dal sistema. Il file stdio.h è stato incluso in quanto contiene
 * ? informazioni riguardanti la funzione printf()
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 */

/**
 * * Riga 3
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * ? Questa è la prima riga della definizione di funzione per main(). Le parentesi tonde dopo il nome main sono scritte per ricordare al lettore che si tratta di una funzione.
 * ? Ogni programma contiene una funzione chiamata main() e l'esecuzione di un programma comincia sempre con questa funzione.
 * ? Questa è quindi una funzione priva di parametri che restituisce un valore di tipo int 
 * ? inoltre dobbiamo dire che la parola chiave void serve per indicare al compilatore che la funzione non richiede alcun parametro.
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 */

/**
 * * Riga 3
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * ? Le parentesi graffe racchiudono il corpo della definizione di funzione e vengono inoltre utilizzate per raggruppare più istruzioni
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 */

/**
 * * Riga 4
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * ? Il sistema C contiene una libreria standard di funzioni utilizzabili nei programmi e questa è una funzione della libreria che stampa sullo schermo.
 * ? Inoltre dobbiamo dire che in C, una costante di tipo stringa è una serie di caratteri racchiusa tra doppi apici. Questa stringa è un parametro della funzione printf()
 * ? e controlla ciò che deve essere stampato. I due caratteri \n alla fine della stringa rappresentano un singolo carattere chiamato newline:
 * ? esso è un carattere stampabile che fa avanzare il cursore all'inizio di una riga successiva.
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 */

/**
 * * Riga 5
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * ? Questa è un'istruzione return. Essa fa si che venga restituito il valore 0 al sistema operativo, che può eventualmente, ma non necessariamente,
 * ? utilizzarlo per qualche scopo
 * !--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 */