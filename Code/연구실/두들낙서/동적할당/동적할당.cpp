//정적할당: int a;
//동적할당: 프로그램 실행 중에 변수를 메모리에 할당하는 것

#include <iostream>
using namespace std;

int main(){
  int *a= new int(5); // new는 주솟값을 반환한다.
                      // 우변부터 실행
  cout << a <<endl;
  cout << *a << endl;

  *a =10;

  cout << a << endl;
  cout << *a <<endl;

  delete a; // 메모리 해제

}
