#include <iostream>

using namespace std;
int fib(int a);
int main(){

  int i;
  cin >> i;

  cout << fib(i)<<endl;
}

int fib(int a)
{


  if (a < 1 )
    return 0;
  else if(a==1)
    return 1;
  return fib(a-1)+fib(a-2);
}
