#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double result=0;
    int* sort_array = (int*) malloc((nums1Size + nums2Size)*sizeof(int));
    int i=0;
    int j=0;

    for(int k=0; k<nums1Size+nums2Size; k++){

        if(i < nums1Size && (nums1[i] < nums2[j])){
            sort_array[k] = nums1[i];
            i++;
        }
        else{
            sort_array[k] = nums2[j];
            j++;
        }
    }

    if((nums1Size+nums2Size)%2==0){
        int index = (nums1Size+nums2Size)/2;
        result = (sort_array[index] + sort_array[index-1])/2.0;
    }
    else{
        int index = (nums1Size+nums2Size)/2;
        result = sort_array[index];
    }
    return result;
}
