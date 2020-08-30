#include <iostream>

struct Point {int x, y;}; //지금 단계에서는 메모리에서 아무 일도 안일어난다.

int main(){
//struct Point {int x, y;}; 라고 써도 됨

  Point p; // 메모리에 int형 4바이트 짜리 두 개(p.x , p.y) 만들어진다.
          // sizeof(p) == 8이다.
  p.x =3;
  p.y =4;

  std::cout <<p.x <<", " <<p.y<<std:: endl;

   struct {int x, y;} a;

   a.x = 8;
   a.y = 9;

   std::cout << a.x << ", " << a.y;

}
