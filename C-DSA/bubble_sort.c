#include <stdio.h>

void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int arr[5] = {34,12,77,3,76};
  int n = 5;
  for (int i=0; i<n-1; i++){
    for (int j=0; j<n-i-1; j++){
      if (arr[j] > arr[j+1]){
        swap(&arr[j], &arr[j+1]);
      }
    }
  }
  for (int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
}
