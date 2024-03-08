#include <stdio.h>
void print_menu ():
int gioca_partita);
int main () {
char scelta= {'\0'};
print_menu();
scanf ("%c", ascelta);
if (scelta = 'B')
{
printf ("Grazie per aver giocato, alla prossima\n");
return 0;
}
while (scelta = 'A')
{
gioca_partita();
print_menu();
scanf ("%c", &scelta);
}
return o;
void print_menu Ol
printf ("Start menu: \n");
printf
("A » Iniziare una nuova partita\nB » Uscire dal gioco\n”):
printf ("Inserisci la lettera corrispondente alla tua scelta:");
int gioca_partita()
int punteggio = 0;
char nome [20]= 1 10); char rispostal, risposta2;
printf (“inserisci il tuo nome:\n”);
scanf (“%s”, &nome);
printf (“domanda n1:\n”);
printf (“inserisci qui la prima domanda:\n”);
printf (“A >>> risposta 1\nB >>> risposta 2\nC >>> risposta 3\n”);
printf (“inserire la risposta: ”);
scanf (“%c”, &risposta1);
if (risposta1 = 'B’)
{
punteggio++;
}
printf (“domanda n2:\n”);
printf (“inserisci qui la prima domanda:\n”);
printf (“A >>> risposta 1\nB >>> risposta 2\nC >>> risposta 3\n”);
printf (“inserire la risposta: ”);
scanf (“%c”, &risposta2);
if (risposta2 = 'A’)
{
punteggio++;
}
printf (“Partita conclusa, punteggio totalizzato da %s:%d\n”, nome, punteggio);
return 0;
}

