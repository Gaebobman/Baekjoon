
#include <iostream>
#include <cstring>
/*
1. 3^7 by 3^7 만큼의 배열을 생성2
2. 공백으로 꽉 채워
3. 재귀시작
 */
using namespace std;
void star(int a, int x, int y);

char board[2187][2187];

int main() {
  memset(board, '/', sizeof(board));
  int a = 0;
  cin >> a;
  star(a,0,0);

  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      cout << board[i][j];
    }
    cout << endl;
  }
}

void star(int a, int x, int y) {

  if (a == 1) {
    board[x][y] = '*'; // 각 배열의 바닥을 치면 별을 찍자;
    return;
  }

  a /= 3;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == 1 && j == 1){
        continue;
      }
      star(a, x + a * i, y + a * j); //ㅁ모양 하나 만들고 다음 모양으로 넘어간다.
    }
  }
}

/*
#include <cstring>
#include <iostream>

char mat[2201][2201];

void solve(int y, int x, int num)
{
    if(num == 1)
    {
        mat[y][x]='*';
        return;
    }

    int div = num/3;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i == 1 && j == 1)
                ;
            else
                solve(y+(i*div), x+(j*div), div);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    memset(mat, ' ', sizeof(mat));

    solve(0, 0, n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            printf("%c", mat[i][j]);
        printf("\n");
    }
}
*/
