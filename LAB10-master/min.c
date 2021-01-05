#include "min.h"

void min(int t[], int n, int *min){
	
	int val_min;
	
	for (int i=0; i<n; i++){
		
		if (t[i] < val_min){
			
			val_min = t[i];
		}
	}

	*min = val_min;
}
