#include <iostream>

using namespace std;

struct Time {
  int h, m, s;

  int totalsec() {
   return 3600* h + 60 * m + s;      //구조체 내부에 있으므로 멤버접근 가능
  }
};



int main() {
  Time t = {1, 22, 48};

  cout << t.totalsec();


}
