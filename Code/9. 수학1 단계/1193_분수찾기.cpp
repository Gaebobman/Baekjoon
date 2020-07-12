#include <iostream>

using namespace std;

int main() {

  int up = 0;
  int down = 0;
  int Cy = 2;   // 한 사이클의 분자 분모 합
  int temp = 0; // 한 사이클에서 제일 큰 인덱스
  int x = 0;
  cin >> x;
  if (x == 1)
    cout << "1/1";
  else {
    /*temp = 0.5 * Cy*(Cy+1);
    cout << Cy <<endl;
    Cy++;
    cout << Cy;*/
    while (temp < x) {
      temp = 0.5 * Cy * (Cy + 1); // Sn = 1/2 *n*(n+1)
      Cy++;
    } // 여기서 분자 분모의 합이 나온다.

    if (Cy % 2 == 1) // 분자 분모 합이 홀수인 경우 1/(temp-1) 으로 시작
    {
      up = Cy - 1;
      down = 1;
      for (int i = 0; i < temp - x; i++) { //( temp )만큼 뒤로 세주면 된다.
        up--;
        down++;
      }
      cout << up << "/" << down;

    } else         // 짝수인 경우 (temp -1) / 1 으로 시작
    {
      up = 1;
      down = Cy -1;
        for (int i = 0; i < temp - x; i++)
        {
          up++;
          down--;
        }
      cout << up << "/" << down;
    }
  }

  return 0;
}

//  sum +=

/*
분자		분모		분자 Peak
                                2n-1
1	  1	  1
ㅡ
1		2
2		1	3
                ㅡ
3@		1
2		2
1	6	3
ㅡ
1		4
2		3
3		2
4		1	7
                ㅡ
5 @		1
4		2
3		3
2		4
1	9	5
ㅡ
1		6
2		5
3		4
4		3
5		2
6		1	11
                ㅡ
7@
6
5
4
3
2
1	13		15


*/
