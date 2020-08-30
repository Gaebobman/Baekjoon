#include <iostream>
#include <cmath>

using namespace std;

int main(){
  ios::sync_with_stdio(NULL);

  double M=0;
  int N;
  double sum =0;


  cin>> N;
  double arr[N];

  for (int i= 0 ; i<N ; i++)  //시험점수들을 입력 받아
  {
    cin >> arr[i];
    if(arr[i] > M) //최고점 산정
    {
      M = arr[i];
    }

  }



  for(int a=0; a < N ; a++)
  {


    arr[a] = arr[a]/M*100;


    sum += arr[a];


  }

  cout << sum / N ;

  return 0;
}
