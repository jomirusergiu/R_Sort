#include <stdbool.h>
#include "combsort.h"

void combSort(long array[], int size) {
    const float shrink = 1.3f;
    int swap;
    int i, gap = size;
    bool swapped = false;
 
    while ((gap > 1) || swapped) {
        if (gap > 1) {
            gap = (int)((float)gap / shrink);
        }
 
        swapped = false;
 
        for (i = 0; gap + i < size; ++i) {
            if (array[i] - array[i + gap] > 0) {
                swap = array[i];
                array[i] = array[i + gap];
                array[i + gap] = swap;
                swapped = true;
            }
        }
    }
}