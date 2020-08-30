#include <stdio.h>

/* #define PI 3.14159
#define PRINT_HELLO cout <<"Hello";
*/
#define SQUARE(X) (X*X)
//형 없어도 된다.
int main(){
  // PRINT_HELLO // Hello 출력;

  int a;
  scanf("%d", &a);

  //printf("%d\n" ,SQUARE(a)); // == cout << a*a  단순히 a*a로 교체되는거다.
                                //#define SQUARE(X) X*X로 하지 말자
printf("%d\n" ,SQUARE(a))
}
