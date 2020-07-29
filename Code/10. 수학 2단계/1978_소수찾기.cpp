#include <iostream>

using namespace std;

int main() {
  int N;
  int count = 0;
  cin >> N;
  int arr[N];

  for (int i = 0; i < N; i++) {
    cin >> arr[i]; // 입력받기
  }

  for (int i = 0; i < N; i++) {
    int tmp = 0;

    for (int j = 1; j <= arr[i]; j++) {

      if (arr[i] % j == 0) {
        tmp++;

      }
    }
    if (tmp == 2)
      count++;
  }

  cout << count;
}
