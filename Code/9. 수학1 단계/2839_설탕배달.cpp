#include <iostream>

using namespace std;

int baedal(int a);
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int sultang;

  cin >> sultang;

  /*if (sultang > 1000)
  {
    sultang-=1000
  }
*/
  cout << baedal(sultang);
  return 0;
}

int baedal(int a)
{
  int podae = 0;

  while (a > 0) {
    if (a % 5 == 0) {
      a -= 5;
      podae++;
    } else if (a % 3 == 0) {
      a -= 3;
      podae++;
    } else if (a > 5)
    {
      a-=5;
      podae++;
    }else
    return -1;
  }
  return podae;
}
