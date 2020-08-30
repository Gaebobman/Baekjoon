#include <iostream>

using namespace std;
/*typedef int point[2];
typedef point *pointptr;

int main(){
    point p ={3,4}; // int p[2] = {3,4};
    pointptr pp = &p; // point *pp = &p;

    printf("%d %d %d\n",**pp, (*pp)[0], (*pp)[1] );

    // **pp == *(*pp) == *p == p[0];

}
*/

struct Point {
    int x, y;

    void pSwap(){
      int temp = x;
      x = y;
      y = temp;
    }
};



int main(){
  Point pos =  { 3, 4};

  pos.pSwap();

  printf("(%d, %d)\n", pos.x , pos.y);


  return 0;
}
