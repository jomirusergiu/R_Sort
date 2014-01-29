#include "gnomesort.h"

void gnomeSort(long array[], long n){
  int i,temp;
  
  i = 0;
  while(i<n) {
    if(i==0 || array[i-1]<=array[i]) {
      i++;
    }else {
      temp = array[i-1];
      array[i-1] = array[i];
      array[i] = temp;
      i--;
    }    
  }  
}