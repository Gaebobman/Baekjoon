#include <iostream>

using namespace std;

int main(){

  int t;
  int h , w, n;
  int fl = 0;
  int rn=0;
  cin >> t;

  for(int  i = 0 ;  i < t  ; i++){

    cin >> h >> w >> n; //6 12 10

    if(n % h == 0 )
    {
      fl = h;       // 손님순서가 높이와 같을 때
    }else
    {
      fl = n % h;
    }


    if(n % h != 0)
    rn = (n / h) +1;
    else
    rn = n/h;
    if(rn < 10)
    fl = fl * 10;

    cout << fl << rn << endl;

  }





return 0;
}
