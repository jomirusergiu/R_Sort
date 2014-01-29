#include "insertionsort.h"


void insertionSort(long array[], long n) {
  
  long i,index,temp;
  
  for(i=1; i<=(n-1); i++) {
    
    index = i;
    while(index>0 && array[index]<array[index-1]) {
      temp = array[index];
      array[index] = array[index-1];
      array[index-1] = temp;
      
      index--;      
    }
            
  }

}
