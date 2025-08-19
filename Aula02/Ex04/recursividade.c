#include <stdio.h>

int somaArray(int arr[], int n) {
  if (n == 0) {
    return 0;
  }

  return arr[n-1] + somaArray(arr, n-1);
}

int main() {
  int x[] = {1, 2, 3, 4};

  int len = sizeof(x)/sizeof(x[0]);

  printf("%d \n", somaArray(x, len));

  return 0;
}