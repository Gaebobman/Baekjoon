#include <stdio.h>

int main(){
    int arr[2][3] ={{1,2,3} , {4,5,6}};

    for(int(*row)[3] = arr; row < arr+2; row++){
       //row 는 for 한 싸이클마다 한 열 전체를 가르킨다
      for(int *col = *row; col < *row +3 ; col++){
        //row는 3개짜리 배열을 가르키고 있다.
        //그러므로 *row자체가 하나의 배열을 의미
        // 따라서 col에는 *row == &row[0]이 들어가는거다.
        printf("%d " ,*col);
      }
      printf("\n");
    }
  }
