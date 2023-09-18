#include <cs50.h>
#include <stdio.h>

int get_negative_int(void); //on déclare la fonction; on met void car la fonction ne prends pas d'input. 
                            //Elle ne faire que prompt du texte
int main (void)
{
    int i = get_negative_int(); //on appel la fonction
    printf("Negative int is : %i\n", i);
}

int get_negative_int(void) //on définit la fonction
{
    int n; 
    do
    {
        n = get_int("negtive interger : ");
    }
    while (n < 0); //**c'est ici que se trouve l'erreur,
                  // on demande un négatif mais on fait do while tant que le nombre est négatif. 
                  //
    return n;

}