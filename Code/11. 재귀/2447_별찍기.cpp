
#include <iostream>
#include <cstring>
/*
1. 3^7 by 3^7 ë§Œí¼?˜ ë°°ì—´?„ ?ƒ?„±2
2. ê³µë°±?œ¼ë¡? ê½? ì±„ì›Œ
3. ?ž¬ê·??‹œ?ž‘
 */
using namespace std;
void star(int a, int x, int y);

char board[2187][2187];

int main() {
  memset(board, ' ', sizeof(board));
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
    board[x][y] = '*'; // ê°? ë°°ì—´?˜ ë°”ë‹¥?„ ì¹˜ë©´ ë³„ì„ ì°ìž;
    return;
  }

  a /= 3;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == 1 && j == 1){
        continue;
      }
      star(a, x + a * i, y + a * j); //?…ëª¨ì–‘ ?•˜?‚˜ ë§Œë“¤ê³? ?‹¤?Œ ëª¨ì–‘?œ¼ë¡? ?„˜?–´ê°„ë‹¤.
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
