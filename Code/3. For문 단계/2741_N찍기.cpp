/*
#include<iostream>

using namespace std;

int main(){
  int a;
  cin >> a ;

  for(int i = 1 ; i <= a ; i++)
  {
    cout << i <<"\n";

  }

  return 0 ;
}*/

//N찍기 거꾸로
#include<iostream>

using namespace std;

int main(){
  int a;
  cin >> a ;

  for(int i = 0 ; i <= a-1 ; i++)
  {
    cout << a-i <<"\n";

  }

  return 0 ;
}
