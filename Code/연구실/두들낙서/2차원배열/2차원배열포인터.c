#include <stdio.h>
/*
1. arr == &arr[0]
2. *arr == arr[0]
3. ptr +1 == arr에 sizeof(*arr)를 더한 값.
 */
int main(){
    int arr[2][3] ={{1,2,3} , {4,5,6}};

    int (*ptr)[3] = &arr[0]; //int (*ptr)[3] = arr;
      //1. ptr[i] == arr[i]
      //2. ptr[i][j] == arr[i][j]
      // ptr == arr
      // ptr + i == &ptr[i]

    for(int i  = 0 ; i < 2 ; i++){
      for(int j = 0 ; j < 3 ; j++){
        printf("%d " , ptr[i][j]);
      }
      printf("\n");
    }
}
