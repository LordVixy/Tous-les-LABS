#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "max.h"
#include "min.h"
#include "var.h"


int main(){

	int t[]={13,12,5,1,19,13,17};
	int n=7;
	int val_max;
	int val_min;
	float val_var;
	max(t,n,&val_max);
	min(t,n,&val_min);
	var(t,n,&val_var);

	printf (" le max est : %d\n le min est : %d\n la variance est : %f\n ceil(variance) : %f\n floor(variance) : %f\n", val_max, val_min, val_var, ceil(val_var), floor(val_var));

	return 0;
}
