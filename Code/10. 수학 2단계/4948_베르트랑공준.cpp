#include <iostream>

using namespace std;

/*
이렇게 하면 시간초과 나오지만 한번 보기나 합시다.

int main() {

  int a;

  cin >> a;
  while (a != 0) {
    int primecounter =0;

    for (int i = a+1; i <= (a * 2); i++) {
      int primetest = 0;

      for (int j = 1; j <= i; j++) {
        if (i % j == 0) {
          primetest++;

        }
      }

      if (primetest == 2)
        primecounter++;

    }

    cout << primecounter <<endl;

    cin >> a;
  }
  return 0;
}
*/
int main() {
  //문제에서 요구하는 건 반복문 X
  bool prime[246913] = {false, };
  int a;

  for (int i = 2; i * i < 246912; i++) {
    if (prime[i] == false)
      for (int j = i * i; j <= 246912; j += i){
        prime[j] = true;
        }

  }



 while (cin >> a) {
    if (a == 0)
      break;

    int count = 0;
    for (int i = a + 1; i <= a * 2; i++) {
      if (prime[i] == false)
        count++;
    }


    cout << count << endl;
}

  return 0;
}
