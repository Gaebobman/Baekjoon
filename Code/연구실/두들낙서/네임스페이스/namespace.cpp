#include <iostream>

using namespace std;

int n;

void set() {
  n = 10; // ::n 명시적 전역변수
}

namespace doodle {
int n;
void set() {
  n=20;
}

}
namespace google{
  int n;
  void set(){
    n =30;
  }
}

int main() {
  ::set();
  doodle::set();
  google::set();

  cout << ::n<<endl;
  cout << doodle::n<<endl;
  cout << google::n<<endl;

}
