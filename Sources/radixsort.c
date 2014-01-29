#include "radixsort.h"


void radixSort(long array[], long n) {
  int i,m=0,exp=1,temp[n];
  
  for(i=0;i<n;i++) {
    if(array[i]>m)
      m=array[i];
  }
  
  while((m/exp)>0) {
    int bucket[10] = {0};
    
    for(i=0;i<n;i++)
      bucket[array[i]/exp % 10]++;
    
    for(i=1;i<10;i++)
      bucket[i] += bucket[i-1];
    
    for(i=n-1;i>=0;i--)
      temp[--bucket[array[i]/exp % 10]] = array[i];
    
    for(i=0;i<n;i++)
      array[i] = temp[i];
    
    exp *= 10;    
  }  
}