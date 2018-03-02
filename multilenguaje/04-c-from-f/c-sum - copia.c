#include <stdlib.h>
#include "c-sum.h"

void sum_abs_(int *in, int *num,int *sum) {
   int i,n,s;
n=*num;
   for (i=0,s=0; i < n; ++i) {
       s += abs(in[i]);
   }
*sum=s;
   return;
}
 
