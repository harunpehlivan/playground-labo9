# Exercice 3

## Les nombres aléatoires

```C runnable
#include <stdio.h>
#include <time.h>

int main() {
	//Initialise la séquence de nombres pseudo-aléatoires
	srand(time(NULL);

	//rand() renvoi un nombre pseudo-aléatoire.
	printf("Nombre aléatoire : %d", rand());
	
	return 0;
}
```


## Devinez le nombre ! 

Ecrire un programme qui …
- génère un nombre entier compris entre 1 et 1000.
- offre à l’utilisateur 10 essais pour trouver ce nombre.  Les indications « c’est plus » ou « c’est moins » sont fournies à l’utilisateur pour toute tentative infructueuse.
