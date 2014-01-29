#include "selectionsort.h"


void selectionSort(long array[], long n) {
  
  long i,j,index,temp;
  
  for(i=0; i<(n-1); i++) {
    
    index = i;
    for(j=i+1;j<n;j++) {
      if(array[index]>array[j])
	index = j;      
    }
    if(index!=i) {
      temp = array[i];
      array[i] = array[index];
      array[index] = temp;
    }
     
  }

}
