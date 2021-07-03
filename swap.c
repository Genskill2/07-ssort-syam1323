#include<stdio.h>

void swap_max(int [], int, int );
void swap_max(int arr[],int l,int n) {
    int index_largest=n;
    //printf("Largest index: %i\n", index_largest);  
    for(int i=n;i<l-1;i++) {
    	//printf("i= %i\n", i);
        if(arr[index_largest]<arr[i+1]) {
            index_largest = (i+1);
        }        
    }
    //printf("Index final: %i\n", index_largest);
    int t;
    t = arr[n];
    arr[n] = arr[index_largest];
    arr[index_largest] = t;
}

void ssort(int [], int);
void ssort(int arr[], int l) {
  for(int i=0; i<l-1; i++) {
    swap_max(arr,l,i);
  }
}
