#include <iostream>

using namespace std;

//함수 오버로딩

int inventory[64] = {0};
int score =0;
// 디폴드값은 오른쪽에서부터 넣어야한다 !!
void getItem(int itemId, int cnt=1, int sc=0){
  inventory[itemId]+=cnt;
  score+=sc;
}

int main(){
  getItem(6,5);
  getItem(3,2);
  getItem(3);
  getItem(11,34,7000);

  cout << score <<endl;
  for(int i=0;i<16;i++){
    cout << inventory[i] << ' ';

  }
  cout <<endl;
}
