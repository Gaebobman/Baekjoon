#include <iostream>

using namespace std;
int facto(int a);

int main(){
  int a;

  cin >> a;

    cout << facto(a);


}

int facto(int a)
{
  if ( a == 1 || a == 0)
    return 1;
  else if(a >2)
  a *= facto(a-1);
  return a;
}
