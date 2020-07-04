#include <iostream>

using namespace std;

int main(){
  int n;
  cin>> n;
  for (int a = 1 ; a<= n ; a++)     // 상부 별 찍기
  {

    for(int b= 1; b< a; b++ )
    cout << " ";            //공백출력

    for (int c =0 ; c <2*n- 2*a+1; c++ )
    cout <<"*";

    cout<<endl;
  }


  for (int d = 1 ; d < n ; d++)     // 하부 별 찍기
  {
    for(int e = n-2-d ; e>=0 ;e--)
    cout<<" ";

    for(int f=1 ; f <= 2 * d +1; f++ )
    cout<<"*";
    cout<<endl;
  }



  return 0;
}
