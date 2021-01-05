#include <stdio.h>
#include <stdlib.h>
#include "var.h"

int main(){

    int n=5;
    int t[]={2,5,7,2,9};
    float resultat;
    var(t,n,&resultat);

    printf ("la variance est: %f\n", resultat);

    return 0;
}
