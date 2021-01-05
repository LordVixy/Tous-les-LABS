#include <stdio.h>
#include <stdlib.h>
#include "min.h"

int main(){

    int n=5;
    int t[]={2,5,7,2,9};
    int resultat;
    min(t,n,&resultat);

    printf ("la valeur minimale est: %d\n", resultat);

    return 0;
}
