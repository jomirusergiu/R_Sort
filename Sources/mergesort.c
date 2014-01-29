#include "mergesort.h"


void merge(long array[], long low, long mid, long high, long n);

void mergeSort(long array[], long low, long high, long n) {
  long mid;
  
  if(low<high) {
    mid = (low+high)/2;
    mergeSort(array,low,mid,n);
    mergeSort(array,mid+1,high,n);
    merge(array,low,mid,high,n);
  }   
}

void merge(long array[], long low, long mid, long high, long n) {
  int i,m,k,l,temp[n];
  
  l=low;
  i=low;
  m=mid+1;
  
  while((l<=mid) && (m<=high)) {
    if(array[l]<=array[m]) {
      temp[i]=array[l];
      l++;
    }else{
      temp[i]=array[m];
      m++;
    }
    
    i++;              
  }
  
  if(l>mid){
    for(k=m;k<=high;k++) {
      temp[i]=array[k];
      i++;
    }
  }else{
    for(k=l;k<=high;k++) {
      temp[i]=array[k];
      i++;
    }
  }
  
  for(k=low;k<=high;k++) {
    array[k]=temp[k];    
  }
  
}