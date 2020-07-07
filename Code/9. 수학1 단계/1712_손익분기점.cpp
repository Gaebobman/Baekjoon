#include <iostream>

using namespace std;

int main() {
  int a, b, c; // a고정 b생산비용 c 판매가

  cin >> a >> b >> c;

  int pan = c - b;



  if (b >= c) {

    cout << -1;
  }else
  {
    cout << a / pan + 1;

  }
  return 0;
}
