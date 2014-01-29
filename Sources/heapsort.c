#include "heapsort.h"

void heapSort(long array[], long n) {
  int i,j,k,v,temp;
  
  // create heap
  for(i=1;i<n;i++) {
   k = i;
   
   do {
     v = (k-1)/2;
     
     if(array[v]<array[k]) {
       temp = array[v];
       array[v] = array[k];
       array[k] = temp;              
     }
     k = v;
     
   }while(k!=0);            
  }
  
  // sorting
  for(j=n-1;j>=0;j--) {
    temp = array[0];
    array[0] = array[j];
    array[j] = temp;
    v = 0;
    
    do {
      k = 2*v + 1;
      
      if(array[k] < array[k+1] && k < j-1)
	k++;
      
      if(array[v]<array[k] && k<j) {
	temp = array[v];
	array[v] = array[k];
	array[k] = temp;		
      }
      v = k;
      
    }while(k<j);        
  }
    
}