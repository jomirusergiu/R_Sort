#include "bubblesort.h"
#include "insertionsort.h"
#include "selectionsort.h"
#include "heapsort.h"
#include "quicksort.h"
#include "mergesort.h"
#include "radixsort.h"
#include "gnomesort.h"
#include "shellsort.h"
#include "cyclesort.h"
#include "combsort.h"
#include "countingsort.h"
#include "main.h"
#include <stdio.h>

int main() {

  //Print initial array
  printf("\n//=====Shuffled array===================//");
  setarray();
  printarray("Initial Array");

  //=====Simple sorts=====//
  printf("\n\n//=====Simple sorts====================//");
  //Insertion sort
  setarray();
  insertionSort(array,10);
  printarray("InsertionSort");
  //Selection sort
  setarray();
  selectionSort(array,10);
  printarray("SelectionSort");
  
  //=====Eficient Sorts=====//
  printf("\n\n//=====Eficient sorts==================//");
  //Mergesort
  setarray();
  mergeSort(array,0,9,10);
  printarray("MergeSort");
  //Heapsort
  setarray();
  heapSort(array,10);
  printarray("HeapSort");
  //Quicksort
  setarray();
  quickSort(array,0,9);
  printarray("QuickSort");
  
  //Bubble sort and variants
  printf("\n\n//=====Bubble sort and variants========//");
  //Bubblesort
  setarray();
  bubbleSort(array,10);
  printarray("BubbleSort");
  //Shellsort
  setarray();
  shellSort(array,10);
  printarray("ShellSort");
  //Combsort 
  setarray();
  combSort(array,10);
  printarray("CombSort");

  //Distribution sorts
  printf("\n\n//=====Distribution sorts==============//");
  //Countingsort
  setarray();
  countingSort(array, 10, 0, 99);
  printarray("CountingSort");   
  //Radixsort
  setarray();
  radixSort(array, 10);
  printarray("RadixSort");  

  //Other sorts
  printf("\n\n//=====Other sorts=====================//");
  //Gnomesort
  setarray();
  gnomeSort(array,10);
  printarray("GnomeSort");    
  //Cyclesort
  setarray();
  cycleSort(array,10);
  printarray("CycleSort");

  printf("\n\n");     
}

void setarray() {
  array[0] = 10;
  array[1] = 11;
  array[2] = 8;
  array[3] = 19;
  array[4] = 5;
  array[5] = 3;
  array[6] = 22;
  array[7] = 6;
  array[8] = 35;
  array[9] = 13;  
}

void printarray(char* title) {
  int i;
  printf("\n%s: \t",title);
  for(i=0;i<10;i++)
    printf("%ld ", array[i]);
}
