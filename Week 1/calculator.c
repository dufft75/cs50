#include <cs50.h>
#include <stdio.h>

int main (void)
{
    long x = get_int("x: ");
    long y  = get_int("y: ");

    printf("%li\n", x + y);
}

// si on fait 2+2 on aura 4
// si on fait 2 millliards + 2 milliards  avec des int => on obtiendra n'importe quoi à cause de la limite des 32 bits. on peut avoir environ 2 milliard en postif et 2 milliard en négatif.
//il faut donc remplacer par un long