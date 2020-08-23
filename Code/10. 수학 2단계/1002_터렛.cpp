#include <cmath>
#include <iostream>

using namespace std;

int main() {


  int T;

  cin >> T;

  while (T--) {
    long long x1, y1, r1, x2, y2, r2;

    long long d = 0;

    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2; //입력받고
    if (r1 > r2){ //반지름의 길이를 비교할때 편하게 하자
      swap(r1, r2);

    }

    long long bbae = r2 - r1;
    long long deo = r2 + r1;

    bbae = pow(bbae, 2);
    deo = pow(deo, 2);

    d = pow((x1 - x2), 2) + pow((y1 - y2), 2); // 두 점 사이의 거리

            //이제 비교시작
    if (deo == d){ //한점에서 만나고 외접
      cout<< 1 << endl;

    }
    else if (bbae == d && r1 != r2) //한점에서 만나고 내접
      cout << 1 << endl;

    else if (bbae < d && deo > d) // 두 점에서 만날때;
      cout << 2 << endl;

    else if (d < bbae && r1 != r2)
      cout << 0 << endl;

    else if (d > deo)
      cout << 0 << endl;

    else if (d == 0 && r1 == r2)
    cout << -1 <<endl;
  }

  return 0;

}
/*
1. 한 점에서 만날 때
        -외접	R_1 + R_2 = D     #1  deo = d;

        -내접  	R_2 - R_1 = D   #2  bbae =d;

2. 두 점에서 만난다. R_2 - R_1 < D < R_1+R_2   #3

3. 포함  D < R_2 -R_1  #4

4. 거리가 멀다 D> R_1 +R_2 #5

5. 두 원이 일치(존내많아)
D = 0 , R_1 = R_2

 */
