#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funzione per presentare l'introduzione
void presentazione() {
    printf("********************************************************\n");
    printf("* Benvenuto al Super Fantastico Quiz dei Polli!      *\n");
    printf("* Metti alla prova le tue conoscenze e dimostra di essere un vero Pollo! *\n");
    printf("********************************************************\n\n");
}

// Funzione per mostrare il menu iniziale e ricevere l'input dell'utente
char menu_iniziale() {
    char scelta;
    printf("Cosa desideri fare?\n");
    printf("A) Iniziare una nuova partita\n");
    printf("B) Uscire dal gioco\n");
    printf("Inserisci la tua scelta (A/B): ");
    scanf(" %c", &scelta);
    return scelta;
}

// Funzione per gestire una nuova partita
void nuova_partita() {
    char nome_utente[50];
    int punteggio = 0;
    int risposta;

    printf("\nFantastico! Iniziamo una nuova partita.\n");
    printf("Come ti chiami, audace concorrente? ");
    scanf("%s", nome_utente);
    
    printf("\nBenvenuto, %s! Ecco la tua prima domanda.\n\n", nome_utente);

    // Set di domande
    printf("Domanda 1: Qual è il colore del cielo?\n");
    printf("1) Verde\n2) Blu\n3) Rosso\n");
    printf("Inserisci il numero della tua risposta: ");
    scanf("%d", &risposta);
    if (risposta == 2) {
        printf("Corretto!\n");
        punteggio++;
    } else {
        printf("Sbagliato! La risposta giusta era: Blu.\n");
    }

    printf("\nDomanda 2: Quanto fa 2 + 2?\n");
    printf("1) 3\n2) 4\n3) 5\n");
    printf("Inserisci il numero della tua risposta: ");
    scanf("%d", &risposta);
    if (risposta == 2) {
        printf("Corretto!\n");
        punteggio++;
    } else {
        printf("Sbagliato! La risposta giusta era: 4.\n");
    }

    printf("\nDomanda 3: Chi ha scoperto l'America?\n");
    printf("1) Cristoforo Colombo\n2) Marco Polo\n3) Leonardo da Vinci\n");
    printf("Inserisci il numero della tua risposta: ");
    scanf("%d", &risposta);
    if (risposta == 1) {
        printf("Corretto!\n");
        punteggio++;
    } else {
        printf("Sbagliato! La risposta giusta era: Cristoforo Colombo.\n");
    }

    printf("\n%s, il tuo punteggio finale è: %d\n", nome_utente, punteggio);
}

int main() {
    char scelta;

    presentazione();
    
    do {
        scelta = menu_iniziale();

        switch (scelta) {
            case 'A':
            case 'a':
                nuova_partita();
                break;
            case 'B':
            case 'b':
                printf("\nGrazie per aver giocato al Super Fantastico Quiz dei Polli! Coccodè!\n");
                break;
            default:
                printf("Scelta non valida. Per favore, inserisci A o B.\n");
        }
    } while (scelta != 'B' && scelta != 'b');

    return 0;
}