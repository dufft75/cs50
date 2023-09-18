#include <stdio.h>

int main (void)
{
    int x = 2; //prompt pour demander un integer à l'utilisateur
switch(x)         //on démarre la fonction
{
    case 1 :            //évite de répéter if x = 1 then... else if ...
    printf("One !\n");
    break;//important de faire un break à afin de sortir et ne pas évaluer les autres conditions
    case 2 :
    printf("Two !\n");
    break;
    case 3:
    printf("Three !\n");
    break;
    defaut :
    printf("Sorry !\n");
}
}