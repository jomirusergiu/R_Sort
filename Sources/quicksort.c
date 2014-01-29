#include "quicksort.h"


void quickSort(long array[], long first, long last) {

  int i,j,v,temp;
  
  if(first<last) {
    v = first;
    i = first;
    j = last;
    
    while(i<j) {
      while(array[i]<=array[v] && i<last)
	i++;
      
      while(array[j]>array[v])
	j--;
      
      if(i<j) {
	temp = array[i];
	array[i] = array[j];
	array[j] = temp;		
      }            
    }
    
    temp = array[v];
    array[v] = array[j];
    array[j] = temp;
    
    quickSort(array,first,j-1);
    quickSort(array,j+1,last);        
  }

}