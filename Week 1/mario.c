#include <stdio.h>
#include <cs50.h>

//on déclare les fonctions utilisées car on les utilise dans le code avant de les décrire (plus bas). En les citant une fois au début, on permet la bonne compilation.
int get_size(void);
void print_grid(int size);



int main (void)
{
    //get size of grid
    int n = get_size(); //on stock le retour de get_size dans la variable 'n'
    
    //Print grid of bricks
    print_grid(n);
}



//fonctions 
int get_size(void) // on écrit le format de l'output (int) ; le nom de la fonction 'get_size ; puis les inputs (ici il n'y en a pas, on écrit donc void);
{
    int s;
    do 
    {
     s = get_int("Size: "); //on utilise do while pour ne pas se répéter.
    }
    while (s < 1 );
    return s;
}

void print_grid(int size) //format de l'ouput : void => la fonction ne fait que l'action de print. pas d'output. ; en input on entre un int que l'on nomme size;
{
 for (int i = 0; i < size ; i++)
    { 
        for (int j = 0; j < size ; j++) 
        {
            printf("#");
        }
            printf("\n");
    }
} 
