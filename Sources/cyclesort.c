#include "cyclesort.h"

void cycleSort(long array[], long n) {
  int i,j,k,temp,item,pos;
  
  for(i=0;i<n;i++) {
    item = array[i];
    pos = i;
    do{
      k = 0;
      for(j=0;j<n;j++) {
        if(pos!=j && array[j]<item)
	        k++;	
      }
      if(pos!=k) {
	      while(pos!=k && item==array[k])
	        k++;
	      temp = array[k];
	      array[k] = item;
	      item = temp;
	      pos = k;	
      }      
    }while(pos!=i);    
  }  
}