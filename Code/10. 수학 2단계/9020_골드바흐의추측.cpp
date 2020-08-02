#include <iostream>

using namespace std;

int main() {
  int T; // testcase
  bool arr[10000] = {false, };

  for (int i = 2; i * i < 10000; i++) {
    if(arr[i]==false)
    for (int j = i * i; j < 10000; j += i) {
      arr[j] =true;
    }
  }

  cin >>T;
  while (T--) {
    int n;
    cin >> n;

    while(arr[head]==true && arr[tail]==true)
    {

      --head;
      ++tail;

    }
    cout << head << " " <<tail <<endl;


  }
  return 0;
}
