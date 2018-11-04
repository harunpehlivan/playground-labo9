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

int test_prime()
{
    int ok=0;
    if(_is_prime(3) != is_prime(3))
        ok=1;
    return ok;
    
}

int main(void) {
	int ok=0;
    //int prime_test[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    ok=test_prime();
    if(!ok)
    {
        printf("TECHIO> message --channel \"TEST ERREUR\" 'Error function fail test '\n");
    }
    if(ok)
        printf("TECHIO> success true\n");
    else  
		printf("TECHIO> success false\n");
  return 0;
}



