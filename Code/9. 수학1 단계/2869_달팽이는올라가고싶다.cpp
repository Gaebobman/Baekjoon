#include <iostream>

using namespace std;

int main() {
  int a, b, v;

  int day = 0;
  cin >> a >> b >> v;

  if (a > v)
  {
    cout << 1 ;
    return 0;
  }
  if ((v - a) % (a - b) == 0) { // 딱 나눠 떨어지면 다음날 또 안올라가도 되잖아

    day = (v - b) / (a - b);
  } else {                      // 딱 안나눠 떨어져서 낮에 한번만 더 가자
    day = (v - b) / (a - b) + 1;
  }

  cout << day;

  return 0;
}
