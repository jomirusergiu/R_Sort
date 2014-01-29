#include <assert.h>
#include <stdio.h>
#include "countingsort.h"

void countingSort (long array[], int len, int min, int max) {
  assert(len > 0);
  assert(min <= max);
  assert(array != NULL);
 
  int cnt[max-min+1];
  int i,j;

  for(i = min; i <= max; ++i) cnt[i - min] = 0;
  for(i = 0; i < len; ++i) ++cnt[array[i] - min];
 
  for(i = min; i <= max; ++i)
    for(j = cnt[i - min]; j--;)
      *array++ = i;
}