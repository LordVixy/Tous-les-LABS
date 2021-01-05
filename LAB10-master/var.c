#include "var.h"

void var(int t[], int n, float *var){

	int sum_moy=0;
	float sum=0;
	float M=0;

	for(int i=0; i<n; i++){
		sum_moy+=t[i];
	}

	M=sum_moy/n;

	for(int i=0; i<n; i++){
		sum+=(t[i]-M)*(t[i]-M);
	} 
	  
	*var=sum/n;
}
