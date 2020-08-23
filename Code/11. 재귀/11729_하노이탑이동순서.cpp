#include <cmath>
#include <iostream>

using namespace std;

void han(int, int, int);

int cycle = 0;
int main() {
  ios::sync_with_stdio(NULL);
  int N;
  cin >> N;
  cout << (int)pow(2, N) -1 <<'\n';      //2^N -1이 이동횟수네여
  han(N, 1, 3);

   return 0;
}

void han(int a, int top, int bot) {   // top 에서 bot 으로 가야한다.

  int mid = 6-(top + bot);    // top과 bot이 아닌 곳 이겠지?
                              //top에서 bot으로 옮기면 하나는 놀고 있음 - > 123중에 하나잖아

  if (a == 1){
    cout << top << " " << bot << '\n';
}

  if (a >= 2) {           // 2개만 있을 경우를 써봤는데 모든 경우에 맞는다.
    han(a-1 , top , mid);
    han(1 , top , bot);  // 최하위층을 이동시키니깐 1 로 합니다.
    han(a-1 , mid , bot);
  }

}
