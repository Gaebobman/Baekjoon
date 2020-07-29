#include <iostream>

using namespace std;

int main(){
  int m ,n ;
  int st = m;
  int end = n;
  int min = 10001;
  cin >> m >>n;

  for(int i = m ; i <=n ; i++)
  {   int tmp = 0

      for (int a = 1; a <=i ; a++)
      {
        if(i % a == 0)
        {
          tmp++;
        }
      }
      if(tmp == 2)
      i =min;
  }

}
