#include <stdio.h>
#include <stdlib.h>
#include "prime.h"

int _is_prime(int nb)
{
	int i, test;
	test = 1;

	for (i = 2; i < nb; i++)
		if (nb % i == 0) test = 0;
	return test;
}

int main(void) {
	int i;
	int prime_test[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int ok=1;
	
    for (i=0;i<20;i++) {		
		if (_is_prime(prime_test[i]) == is_prime(prime_test[i])) {
            ok = ok && 1;
        }
        else {
            ok = ok && 0;
            printf("TECHIO> message --channel \"TEST ERREUR\" 'Error function fail test (%d)'\n",i);
        }
    }
        
    if(ok)
        printf("TECHIO> success true\n");
    else  
		printf("TECHIO> success false\n");

	return 0;
}
