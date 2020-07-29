#include <iostream>

using namespace std;

int main() {

  int t;
  double x, y;
  int size = 2;
  int loop = 0;
  int cnt = 2;
  cin >> t;

  while (t--) {

    cin >> x >> y;

    if (x - y == 1 || x - y == 2) {

    } else {
      while (1) {

          if(loop > x-y)
          {
            cout << loop;

          }

          for(int i = 0; i <2 ; i ++)
          {
            loop +=size;
            cnt++;
          }
          size++;

      }
    }
  }
}

/*
거리		이동방식	       작동횟수

1		1		1

2		11		2

3		111		3
4 		121		3

5		1211		4
6		1221		4

7		12211		5
8		12221		5
9		12321		5

10		123211		6
11		123221		6
12		123321		6

13		1233211		7
14		1233221		7
15		1233321		7
16		1234321		7

17		12343211	8

1+1+2+2+3+3+4+4+ .......

 */
