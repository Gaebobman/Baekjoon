#include <iostream>
#include <cstring>

using namespace std;



int main(){
  int T, R;
  char S[1001];
  cin >>T; // 테스트 케이스의 개수 받아온다

for(int a = 0 ; a < T; a++){    //케이스 T만큼 돌아간다
  cin >> R; // 반복횟수
  scanf("%s", S); // String을 받아.
  for(int i = 0; i < strlen(S); i++)
  {
    for(int b = 0 ; b < R ; b++)
    {
      cout << S[i];
    }
  }
  cout <<endl;
}



return 0;

}
