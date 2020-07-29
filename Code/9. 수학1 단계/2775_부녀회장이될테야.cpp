#include <iostream>

using namespace std;

int main(){

  int t, k , n;
  int apt [15][15] = {0,};
  cin >> t;

  for(int i = 1 ; i < 15 ; i ++)
  {
    apt[0][i] = i;
  }

  for (int i = 1 ; i <15 ; i++)
      for(int j  = 1 ; j <15 ; j++)
      apt[i][j]= apt[i][j-1] + apt[i-1][j];



while(t--)
  {
    cin>> k >> n;

    cout << apt[k][n]<<endl;
  }

  return 0;
}
