#include <iostream>

using namespace std;

int main() {
  int m, n;
  int min = 10001;
  int sum = 0;
  cin >> m >> n;

  for (int i = m; i <= n; i++) // m부터 n 까지 소수 찾기 시작!
  {
    int tmp = 0;

    for (int a = 1; a <= i; a++) {
      if (i % a == 0) {
        tmp++;
      }
    }
    if (tmp == 2)
      sum += i;

    if (tmp == 2 && i <= min)
      min = i;
  }
  if (sum == 0) {
    cout << "-1";

  } else
    cout << sum << endl << min;

  return 0;
}
