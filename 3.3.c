#include <stdio.h>

int main(void)
{
    int inz_nome, eta;
    printf("inserisci l'iniziale della persona: ");
    scanf("%c", &inz_nome);
    printf("inserisci l'eta della persona: ");
    scanf("%d", &eta);
    if (eta < 18 ) {
        printf("la persona %c e' minorenne %d", inz_nome, eta);
    }
    else {
        printf("la persona %c e' maggiorenne %d", inz_nome, eta);

    }
}
