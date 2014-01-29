#include "shellsort.h"


void shellSort(long list[], long n) {
  int i,j,k,temp;
  
  for(i=n/2;i>0;i=i/2) {
    for(j=i;j<n;j++) {
      for(k=j-i;k>=0;k=k-i) {
	if(list[k+i]>=list[k])
	  break;
	else {
	  temp = list[k];
	  list[k] = list[k+i];
	  list[k+i] = temp;	  
	}	
      }      
    }    
  }  
  
}