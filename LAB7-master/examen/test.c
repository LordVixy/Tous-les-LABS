#include <stdio.h>
#include <stdlib.h>
#include "../max.h"
#include "min.h"
#include "var.h"

int main(){

	int t[]={4, 9, 10, 11, 12, 15, 12, 9, 0, 30};
	int n=10;
	int val_max;
	int val_min;
	float val_var;
	max(t,n,&val_max);
	min(t,n,&val_min);
	var(t,n,&val_var);

	printf (" le max est : %d\n le min est : %d\n la variance est : %f\n", val_max, val_min, val_var);

	return 0;
}
