#include "bubblesort.h"

void bubbleSort(long array[], long n) {
  long i,j,temp;
  
  for(i=0; i<(n-1); i++) {
    for(j=0;j<(n-i-1); j++) {      
      if(array[j] > array[j+1]) {
      	// swapping
      	temp = array[j];
      	array[j] = array[j+1];
      	array[j+1] = temp;
      }//if
    }//for
  }//for
}
