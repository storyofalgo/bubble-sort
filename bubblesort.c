#include<stdio.h>

// Bubble Sort: repeatedly compares adjacent elements and swaps them if they are out of order.
// This program prints the array before and after sorting to demonstrate the algorithm.
int main() {
    // Array to be sorted and its size.
    int Arr[] = {43,45,98,23,21,5,1,8,2,6,77,18,4};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int i,j,s;

    // Display the original unsorted order.
    printf("Before Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    // Compare each pair of adjacent elements and swap them until the array is sorted.
    for(i = 0;i < n;i++) {
        for(j = i+1;j < n;j++) {
            if(Arr[i] > Arr[j]) {
                s = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = s;
            }
        }
    }

    // Display the sorted array.
    printf("After Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    return 0;
}