#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string firstName = get_string("What's your first name ? "); //création de la variable 'firstName' de type string ; puis assignation avec la formule get_string ; 
    string lastName = get_string("What's you last name ?");
    printf("hello my bro, %s %s\n", firstName, lastName); // %s correspond à une place gardée pour insérer une variable de type string (firstName) ; /n correspond à un saut de ligne.s

}