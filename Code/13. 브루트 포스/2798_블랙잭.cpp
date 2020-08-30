#include <iostream>
#include <cstdlib> //정수 타입의 abs  실수타입은 cmath
using namespace std;
/*
배열을 입력받고

다 더하면서 M 값과의 차이를 찾고

그 차이가 적어지면 그게 가장 가까운 값.

 */

int compare(int, int);
int main() {
  int N, M;
  cin >> N >> M;

  int arr[N];

  for (int a = 0; a < N; a++) {

    cin >> arr[a];
  }


  int first =900000;
  int aa = 0;
  for (int i = 0; i < N; i++) {

    for (int j = i + 1; j < N; j++) {

      for (int k = j + 1; k < N; k++) {

        int temp = arr[i]+arr[j]+arr[k];

        if(compare(temp, M) <= first && temp <= M){

          first = compare(temp, M);
          aa = temp;

        }

      }
    }
  }

  cout << aa;


return 0;

}


int compare(int a, int given){

    if ( given - a  < 0)
    {
      return abs(given - a);
    }else
    {
      return given - a;
    }

}
