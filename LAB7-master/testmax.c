#include <stdio.h>
#include <stdlib.h>
#include "max.h"

int main()
{
    int n = 5;
    int tab[] = {2,5,7,2,9};
    int resultat;
    max(tab,n,&resultat);

    printf ("le max est : %d\n", resultat);

    return 0;
}
