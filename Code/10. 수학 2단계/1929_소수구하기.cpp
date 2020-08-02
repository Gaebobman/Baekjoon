#include <iostream>

using namespace std;

int main(){
  bool arr[1000000] = {false, };
  int a , b ;
  cin >> a >>b ;

  for (int i = 2 ; i <= b ; i++)
  {
    arr[i] = true;
  }


  for(int i = 2;  (i * i) <= 1000000 ; i++)

    if(arr[i])
    {
      for (int j = i+i ; j <= 1000000 ; j+=i)
        arr[j] = false;
    }



  for( int i = a ; i <=b; i++)
  {
    if (arr[i])
    cout << i <<endl;

  }

  return 0;
}
